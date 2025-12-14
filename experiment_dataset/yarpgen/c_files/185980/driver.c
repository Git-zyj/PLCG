#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13228;
unsigned char var_4 = (unsigned char)221;
unsigned short var_9 = (unsigned short)38780;
short var_11 = (short)1642;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-25;
int zero = 0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-1734;
short var_22 = (short)20744;
unsigned int var_23 = 2366594988U;
int var_24 = -1953907030;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
