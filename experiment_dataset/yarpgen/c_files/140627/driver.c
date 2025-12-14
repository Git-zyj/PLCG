#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1538603725984233919LL;
_Bool var_3 = (_Bool)0;
int var_5 = 492061465;
int var_6 = 4148443;
signed char var_12 = (signed char)106;
int var_14 = 1418150841;
signed char var_16 = (signed char)0;
int zero = 0;
long long int var_18 = 262833486241304691LL;
unsigned int var_19 = 2623577084U;
unsigned int var_20 = 3129014612U;
unsigned int var_21 = 942473341U;
unsigned int var_22 = 4166487941U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
