#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
signed char var_5 = (signed char)11;
unsigned long long int var_7 = 16261618371495700574ULL;
unsigned short var_8 = (unsigned short)18564;
int zero = 0;
unsigned short var_15 = (unsigned short)14082;
int var_16 = -901998340;
short var_17 = (short)-26722;
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
