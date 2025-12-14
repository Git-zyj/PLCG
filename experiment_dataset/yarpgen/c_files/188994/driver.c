#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)64;
unsigned int var_1 = 1064724677U;
unsigned char var_2 = (unsigned char)250;
unsigned short var_5 = (unsigned short)38781;
long long int var_7 = -1914363473972057186LL;
unsigned short var_8 = (unsigned short)6439;
unsigned int var_9 = 2023528946U;
signed char var_10 = (signed char)41;
signed char var_13 = (signed char)-11;
int zero = 0;
signed char var_15 = (signed char)-33;
int var_16 = 1096138087;
void init() {
}

void checksum() {
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
