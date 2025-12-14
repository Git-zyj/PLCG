#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)15732;
signed char var_4 = (signed char)96;
_Bool var_7 = (_Bool)0;
int var_9 = -115191509;
signed char var_12 = (signed char)-88;
signed char var_15 = (signed char)22;
int zero = 0;
unsigned char var_16 = (unsigned char)34;
unsigned long long int var_17 = 2492287234153713963ULL;
unsigned int var_18 = 1669791945U;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
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
