#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8990406562115738845LL;
unsigned long long int var_7 = 5575509628659384838ULL;
short var_8 = (short)5195;
unsigned short var_9 = (unsigned short)58032;
signed char var_10 = (signed char)66;
long long int var_11 = 3710832807579023133LL;
unsigned long long int var_12 = 490008860826736448ULL;
unsigned short var_14 = (unsigned short)3006;
long long int var_16 = -3722532923294775454LL;
long long int var_17 = -3200222217543601786LL;
int zero = 0;
short var_19 = (short)27865;
short var_20 = (short)19515;
unsigned int var_21 = 145369914U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
