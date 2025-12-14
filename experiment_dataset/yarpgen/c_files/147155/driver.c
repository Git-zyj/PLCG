#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-46;
long long int var_2 = 2370515808729364143LL;
unsigned char var_3 = (unsigned char)112;
unsigned short var_4 = (unsigned short)20994;
unsigned int var_6 = 231115702U;
unsigned long long int var_7 = 17809033939081173592ULL;
signed char var_8 = (signed char)35;
short var_10 = (short)-23518;
unsigned char var_11 = (unsigned char)25;
unsigned long long int var_12 = 14671466436148528261ULL;
unsigned short var_13 = (unsigned short)41093;
unsigned short var_15 = (unsigned short)57902;
unsigned int var_16 = 786047340U;
int zero = 0;
signed char var_17 = (signed char)-96;
_Bool var_18 = (_Bool)0;
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
