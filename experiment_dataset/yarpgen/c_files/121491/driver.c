#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12234294744475772273ULL;
short var_4 = (short)-11699;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-18262;
int zero = 0;
_Bool var_12 = (_Bool)0;
long long int var_13 = -874863542142952325LL;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
