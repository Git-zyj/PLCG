#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9764403415059962743ULL;
unsigned short var_3 = (unsigned short)447;
short var_6 = (short)-25829;
signed char var_11 = (signed char)-90;
_Bool var_14 = (_Bool)1;
int zero = 0;
short var_18 = (short)-7873;
long long int var_19 = -4394954227301176936LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
