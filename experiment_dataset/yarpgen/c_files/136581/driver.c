#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4138513547U;
unsigned char var_1 = (unsigned char)92;
signed char var_2 = (signed char)-41;
unsigned long long int var_5 = 4605878388166971725ULL;
int var_8 = 1132328357;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned char var_12 = (unsigned char)41;
unsigned int var_13 = 271173959U;
int var_14 = 368586195;
unsigned long long int var_15 = 11344005151602720781ULL;
unsigned int var_16 = 2535581953U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
