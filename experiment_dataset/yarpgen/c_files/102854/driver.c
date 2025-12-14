#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_2 = 2710478936U;
unsigned char var_3 = (unsigned char)168;
short var_4 = (short)-5966;
unsigned long long int var_5 = 5405746928504257660ULL;
signed char var_8 = (signed char)109;
unsigned char var_12 = (unsigned char)6;
short var_14 = (short)-4590;
int zero = 0;
signed char var_15 = (signed char)65;
unsigned long long int var_16 = 6677089643407269437ULL;
_Bool var_17 = (_Bool)1;
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
