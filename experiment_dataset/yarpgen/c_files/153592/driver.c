#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1908;
unsigned int var_3 = 4289182415U;
unsigned int var_4 = 337952569U;
signed char var_10 = (signed char)-49;
int var_15 = -115463261;
int zero = 0;
int var_17 = -1704254104;
unsigned short var_18 = (unsigned short)469;
unsigned int var_19 = 3153786099U;
void init() {
}

void checksum() {
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
