#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41053;
signed char var_2 = (signed char)35;
_Bool var_4 = (_Bool)1;
unsigned int var_6 = 93081444U;
long long int var_7 = 2923670777787044939LL;
signed char var_13 = (signed char)-79;
int zero = 0;
signed char var_14 = (signed char)42;
unsigned int var_15 = 3285644164U;
unsigned char var_16 = (unsigned char)172;
signed char var_17 = (signed char)105;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
