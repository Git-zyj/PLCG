#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16171;
_Bool var_1 = (_Bool)1;
short var_2 = (short)24346;
unsigned long long int var_8 = 6884506701348252639ULL;
unsigned char var_9 = (unsigned char)212;
short var_10 = (short)22440;
long long int var_13 = 7862128779383078973LL;
short var_15 = (short)1013;
signed char var_16 = (signed char)-80;
int zero = 0;
short var_20 = (short)-30501;
_Bool var_21 = (_Bool)1;
long long int var_22 = -700671406738589833LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
