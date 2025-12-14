#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
short var_7 = (short)-25172;
unsigned int var_9 = 2311115633U;
short var_11 = (short)-19831;
unsigned long long int var_13 = 16740485099652624409ULL;
unsigned char var_14 = (unsigned char)126;
int zero = 0;
signed char var_15 = (signed char)34;
unsigned int var_16 = 4058060562U;
short var_17 = (short)989;
unsigned char var_18 = (unsigned char)109;
int var_19 = -1412672078;
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
