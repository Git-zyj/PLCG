#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 563516956477980847LL;
unsigned char var_6 = (unsigned char)28;
unsigned int var_8 = 1964479085U;
short var_11 = (short)8263;
int var_12 = -1200363398;
short var_13 = (short)-29132;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)23;
int zero = 0;
long long int var_18 = -1179555902897234865LL;
unsigned short var_19 = (unsigned short)7413;
unsigned char var_20 = (unsigned char)98;
void init() {
}

void checksum() {
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
