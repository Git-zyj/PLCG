#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23454;
short var_4 = (short)12658;
unsigned char var_6 = (unsigned char)47;
unsigned int var_9 = 4154339276U;
unsigned char var_10 = (unsigned char)82;
signed char var_11 = (signed char)108;
int zero = 0;
unsigned int var_12 = 922791477U;
short var_13 = (short)22744;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
