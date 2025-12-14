#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3923848298U;
long long int var_3 = 5081199341918279426LL;
unsigned int var_5 = 2148843478U;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)192;
long long int var_8 = -2927990576769644578LL;
int zero = 0;
unsigned short var_10 = (unsigned short)9572;
signed char var_11 = (signed char)-117;
unsigned int var_12 = 703943822U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
