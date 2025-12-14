#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1337231824;
unsigned char var_3 = (unsigned char)183;
signed char var_5 = (signed char)-77;
long long int var_6 = -5121582214327039721LL;
unsigned int var_7 = 1245294527U;
unsigned char var_8 = (unsigned char)221;
int var_9 = 119098211;
unsigned char var_11 = (unsigned char)62;
unsigned short var_14 = (unsigned short)34922;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)14992;
long long int var_17 = -6621404032326472882LL;
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
