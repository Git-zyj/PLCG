#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -9032627479795810035LL;
short var_2 = (short)11633;
_Bool var_5 = (_Bool)1;
short var_7 = (short)1215;
int var_8 = 997519054;
unsigned int var_9 = 4127269040U;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)116;
unsigned short var_13 = (unsigned short)62800;
unsigned short var_17 = (unsigned short)52139;
unsigned short var_18 = (unsigned short)18817;
int zero = 0;
unsigned short var_19 = (unsigned short)24580;
signed char var_20 = (signed char)-73;
void init() {
}

void checksum() {
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
