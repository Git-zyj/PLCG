#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)129;
unsigned char var_2 = (unsigned char)25;
unsigned short var_6 = (unsigned short)38642;
signed char var_7 = (signed char)-12;
signed char var_8 = (signed char)15;
unsigned int var_9 = 1186219616U;
unsigned int var_10 = 4033018361U;
long long int var_12 = -5369141527687984776LL;
int zero = 0;
unsigned char var_13 = (unsigned char)42;
unsigned short var_14 = (unsigned short)27753;
signed char var_15 = (signed char)-117;
unsigned long long int var_16 = 15333217701676755418ULL;
void init() {
}

void checksum() {
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
