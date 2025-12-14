#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15240737649016652455ULL;
unsigned char var_5 = (unsigned char)195;
unsigned short var_6 = (unsigned short)38733;
unsigned char var_7 = (unsigned char)211;
signed char var_8 = (signed char)24;
unsigned char var_9 = (unsigned char)188;
signed char var_10 = (signed char)-53;
signed char var_12 = (signed char)-113;
signed char var_14 = (signed char)127;
int zero = 0;
unsigned char var_15 = (unsigned char)71;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)68;
unsigned long long int var_18 = 3447215880046828459ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
