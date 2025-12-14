#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2247296034U;
signed char var_2 = (signed char)-64;
unsigned char var_3 = (unsigned char)22;
unsigned int var_5 = 1382222462U;
signed char var_6 = (signed char)64;
unsigned int var_7 = 4039331590U;
unsigned char var_9 = (unsigned char)61;
int zero = 0;
unsigned short var_10 = (unsigned short)17145;
unsigned int var_11 = 3757195925U;
unsigned char var_12 = (unsigned char)163;
signed char var_13 = (signed char)-82;
short var_14 = (short)-19908;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
