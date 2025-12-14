#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)129;
unsigned long long int var_6 = 16499219494086641911ULL;
unsigned long long int var_7 = 17449323667721490638ULL;
unsigned short var_8 = (unsigned short)10958;
long long int var_9 = -6922116410124660010LL;
unsigned char var_10 = (unsigned char)27;
signed char var_11 = (signed char)-75;
signed char var_15 = (signed char)19;
unsigned int var_16 = 271782174U;
int zero = 0;
unsigned short var_17 = (unsigned short)54333;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
