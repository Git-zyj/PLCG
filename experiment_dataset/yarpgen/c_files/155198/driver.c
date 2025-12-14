#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)30497;
unsigned short var_2 = (unsigned short)27890;
unsigned short var_3 = (unsigned short)9771;
_Bool var_10 = (_Bool)1;
int var_11 = 1651048039;
int zero = 0;
unsigned long long int var_15 = 16642438364158555201ULL;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 7665804949962140826ULL;
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
