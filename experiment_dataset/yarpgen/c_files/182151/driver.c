#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_3 = (_Bool)0;
_Bool var_6 = (_Bool)0;
signed char var_9 = (signed char)63;
unsigned char var_10 = (unsigned char)168;
_Bool var_11 = (_Bool)1;
int var_12 = -2105942904;
int zero = 0;
unsigned short var_15 = (unsigned short)41283;
unsigned char var_16 = (unsigned char)191;
unsigned char var_17 = (unsigned char)214;
unsigned char var_18 = (unsigned char)125;
signed char var_19 = (signed char)98;
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
