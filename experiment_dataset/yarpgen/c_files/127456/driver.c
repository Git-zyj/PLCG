#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)35;
short var_1 = (short)23379;
signed char var_4 = (signed char)-83;
long long int var_5 = 2959772094838080692LL;
unsigned long long int var_6 = 5199412827421134569ULL;
unsigned long long int var_8 = 9133860142446336348ULL;
short var_9 = (short)-28755;
unsigned short var_14 = (unsigned short)59492;
signed char var_15 = (signed char)-113;
unsigned long long int var_17 = 6422017175125742519ULL;
int zero = 0;
unsigned long long int var_19 = 17313579858138721748ULL;
unsigned short var_20 = (unsigned short)62228;
signed char var_21 = (signed char)98;
signed char var_22 = (signed char)71;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
