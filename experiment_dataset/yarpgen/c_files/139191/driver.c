#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5990047427035491430LL;
unsigned char var_5 = (unsigned char)120;
unsigned int var_6 = 590775271U;
unsigned int var_8 = 2593965749U;
signed char var_9 = (signed char)107;
int var_13 = -1076372997;
unsigned short var_14 = (unsigned short)28249;
int zero = 0;
unsigned char var_15 = (unsigned char)4;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
