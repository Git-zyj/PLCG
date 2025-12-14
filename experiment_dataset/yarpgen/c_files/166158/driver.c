#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5445059513728500526ULL;
unsigned short var_2 = (unsigned short)23245;
_Bool var_5 = (_Bool)1;
unsigned short var_8 = (unsigned short)11165;
short var_11 = (short)23921;
int var_13 = -319805440;
int zero = 0;
unsigned char var_15 = (unsigned char)227;
long long int var_16 = 3928745557855053219LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
