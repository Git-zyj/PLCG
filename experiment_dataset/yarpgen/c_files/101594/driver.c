#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)18048;
signed char var_2 = (signed char)-125;
unsigned int var_3 = 1361063346U;
unsigned short var_6 = (unsigned short)52732;
unsigned short var_9 = (unsigned short)59054;
long long int var_12 = 1110319654818619275LL;
int zero = 0;
unsigned long long int var_17 = 5663573440187005045ULL;
long long int var_18 = 4316345809773829403LL;
signed char var_19 = (signed char)47;
unsigned int var_20 = 1322394888U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
