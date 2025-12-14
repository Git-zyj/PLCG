#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_2 = -442838671;
unsigned char var_3 = (unsigned char)157;
unsigned int var_4 = 266145470U;
unsigned char var_5 = (unsigned char)182;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 15848214007604671752ULL;
unsigned char var_9 = (unsigned char)31;
unsigned long long int var_10 = 2410768102092133873ULL;
unsigned char var_13 = (unsigned char)169;
short var_14 = (short)-6455;
int zero = 0;
unsigned char var_16 = (unsigned char)255;
_Bool var_17 = (_Bool)1;
short var_18 = (short)6109;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
