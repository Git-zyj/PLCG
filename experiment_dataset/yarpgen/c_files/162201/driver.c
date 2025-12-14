#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2893834145U;
unsigned int var_3 = 853465203U;
unsigned short var_4 = (unsigned short)49804;
unsigned long long int var_10 = 9761628788914566259ULL;
int var_12 = 429302409;
unsigned int var_15 = 1044963600U;
int zero = 0;
unsigned long long int var_19 = 7011388933190116248ULL;
unsigned short var_20 = (unsigned short)52005;
short var_21 = (short)325;
unsigned int var_22 = 1467484539U;
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
