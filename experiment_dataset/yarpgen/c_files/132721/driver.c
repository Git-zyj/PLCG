#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)61;
unsigned int var_8 = 1842834086U;
signed char var_11 = (signed char)-125;
_Bool var_13 = (_Bool)0;
unsigned long long int var_16 = 10656073888340374755ULL;
int zero = 0;
short var_17 = (short)-1954;
unsigned long long int var_18 = 2874307399573337733ULL;
unsigned short var_19 = (unsigned short)29588;
void init() {
}

void checksum() {
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
