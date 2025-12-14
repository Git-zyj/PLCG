#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17969291788872070709ULL;
unsigned long long int var_1 = 10003883750397912634ULL;
unsigned char var_2 = (unsigned char)17;
signed char var_3 = (signed char)-45;
signed char var_5 = (signed char)126;
unsigned long long int var_6 = 8428655084161468573ULL;
int var_8 = -666078746;
short var_9 = (short)-23321;
short var_10 = (short)7741;
signed char var_11 = (signed char)-83;
int zero = 0;
signed char var_12 = (signed char)2;
unsigned long long int var_13 = 7529523046788485386ULL;
short var_14 = (short)-6068;
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
