#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)215;
int var_5 = -1642750537;
unsigned short var_8 = (unsigned short)33932;
_Bool var_9 = (_Bool)0;
unsigned long long int var_13 = 5562677370722462261ULL;
unsigned short var_15 = (unsigned short)37697;
int zero = 0;
int var_17 = -442112527;
signed char var_18 = (signed char)82;
unsigned int var_19 = 3705523769U;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 1432581832U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
