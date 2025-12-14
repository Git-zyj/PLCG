#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)69;
unsigned int var_5 = 3180911774U;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)40879;
int var_9 = 341733499;
int zero = 0;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-15216;
signed char var_15 = (signed char)-73;
unsigned char var_16 = (unsigned char)196;
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
