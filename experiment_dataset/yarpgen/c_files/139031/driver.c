#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 7369075990435985542ULL;
int var_7 = -1267239663;
long long int var_9 = -662924902027337123LL;
int var_10 = -864544490;
int var_14 = 1697364746;
unsigned long long int var_18 = 14849304720048161831ULL;
int zero = 0;
int var_20 = 1221387800;
int var_21 = -307689909;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
