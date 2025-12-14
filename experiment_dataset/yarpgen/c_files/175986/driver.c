#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 34752749U;
signed char var_4 = (signed char)2;
long long int var_5 = -4045608366560297408LL;
unsigned char var_8 = (unsigned char)31;
unsigned int var_13 = 214339558U;
int var_14 = 472118217;
int zero = 0;
unsigned long long int var_15 = 18418965462890012663ULL;
short var_16 = (short)-11488;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
