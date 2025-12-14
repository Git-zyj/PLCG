#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2841031673717670277LL;
long long int var_3 = 7775392205854847315LL;
long long int var_4 = -3133799216975490124LL;
long long int var_7 = 3676943360001962296LL;
long long int var_9 = 622504540322745323LL;
int zero = 0;
long long int var_11 = 3379396594570948933LL;
long long int var_12 = 3715839989454743460LL;
long long int var_13 = 7101017377293515248LL;
long long int var_14 = 7046690830427243292LL;
long long int var_15 = 929750772340264781LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
