#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)20;
unsigned char var_3 = (unsigned char)168;
unsigned int var_6 = 2532705694U;
unsigned int var_8 = 27361410U;
int var_9 = -672017722;
short var_11 = (short)-23811;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned short var_13 = (unsigned short)3615;
signed char var_14 = (signed char)-91;
signed char var_15 = (signed char)-65;
unsigned int var_16 = 3641529404U;
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
