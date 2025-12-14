#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8033884263600910530LL;
unsigned int var_4 = 3594927587U;
long long int var_6 = 8403463303721385754LL;
unsigned int var_7 = 2582963863U;
unsigned long long int var_8 = 4302920458766890670ULL;
long long int var_11 = -6503597064131715705LL;
unsigned long long int var_12 = 17025547638605963743ULL;
unsigned long long int var_14 = 3014783926914716773ULL;
unsigned int var_15 = 2146008466U;
unsigned short var_16 = (unsigned short)42622;
int zero = 0;
unsigned short var_17 = (unsigned short)62576;
unsigned char var_18 = (unsigned char)133;
unsigned char var_19 = (unsigned char)97;
unsigned int var_20 = 1944728622U;
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
