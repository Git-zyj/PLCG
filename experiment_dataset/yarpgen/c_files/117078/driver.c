#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)57282;
_Bool var_2 = (_Bool)1;
unsigned char var_4 = (unsigned char)84;
unsigned int var_5 = 2606740885U;
short var_7 = (short)-23323;
unsigned long long int var_9 = 11000150595905112024ULL;
unsigned char var_10 = (unsigned char)85;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)146;
long long int var_18 = -432216556048621800LL;
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
