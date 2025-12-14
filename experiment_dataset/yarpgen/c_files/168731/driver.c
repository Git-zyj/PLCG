#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)250;
unsigned char var_4 = (unsigned char)84;
int var_5 = -630654974;
_Bool var_6 = (_Bool)0;
int var_7 = 215889065;
unsigned char var_8 = (unsigned char)37;
_Bool var_9 = (_Bool)1;
unsigned char var_11 = (unsigned char)125;
long long int var_12 = 236432632396079730LL;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned short var_17 = (unsigned short)37851;
int var_18 = -1368647203;
unsigned long long int var_19 = 13040077265513417394ULL;
unsigned short var_20 = (unsigned short)13730;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
