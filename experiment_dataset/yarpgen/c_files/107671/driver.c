#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3239431790U;
long long int var_5 = 1167281866873734657LL;
signed char var_6 = (signed char)38;
signed char var_7 = (signed char)-74;
_Bool var_8 = (_Bool)1;
int var_9 = -618355287;
signed char var_12 = (signed char)-96;
unsigned int var_13 = 1740798694U;
unsigned short var_14 = (unsigned short)12299;
int zero = 0;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)35;
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
