#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)20637;
unsigned int var_8 = 3820953288U;
unsigned long long int var_13 = 12071000289893552327ULL;
int zero = 0;
long long int var_16 = -5442031696391482231LL;
unsigned short var_17 = (unsigned short)24282;
signed char var_18 = (signed char)97;
void init() {
}

void checksum() {
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
