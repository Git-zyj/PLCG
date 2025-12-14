#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 7366685974434076969LL;
long long int var_5 = 5973590151731516869LL;
signed char var_10 = (signed char)-32;
int zero = 0;
long long int var_11 = 2129476398353944544LL;
long long int var_12 = -3022209456175930053LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
