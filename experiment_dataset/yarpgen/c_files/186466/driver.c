#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7774379652973574084LL;
unsigned char var_4 = (unsigned char)60;
int var_5 = -1870863117;
unsigned short var_7 = (unsigned short)50560;
unsigned int var_8 = 812455484U;
short var_9 = (short)20424;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-13900;
int zero = 0;
signed char var_15 = (signed char)97;
int var_16 = 968124178;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
