#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = -1953772443;
unsigned short var_4 = (unsigned short)47426;
short var_8 = (short)-30440;
unsigned int var_10 = 3812515285U;
signed char var_11 = (signed char)-71;
signed char var_12 = (signed char)-89;
int zero = 0;
unsigned int var_15 = 2841015626U;
unsigned int var_16 = 2208907298U;
signed char var_17 = (signed char)82;
unsigned long long int var_18 = 5853709369552226552ULL;
unsigned int var_19 = 1334879110U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
