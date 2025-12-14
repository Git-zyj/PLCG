#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)16879;
unsigned short var_6 = (unsigned short)1039;
signed char var_7 = (signed char)51;
signed char var_9 = (signed char)-40;
unsigned short var_11 = (unsigned short)47507;
signed char var_14 = (signed char)-99;
int zero = 0;
long long int var_15 = 2620350098584085737LL;
_Bool var_16 = (_Bool)0;
int var_17 = -831288206;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
