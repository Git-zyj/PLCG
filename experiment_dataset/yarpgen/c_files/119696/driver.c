#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)49627;
_Bool var_3 = (_Bool)1;
_Bool var_5 = (_Bool)1;
unsigned int var_17 = 2775930586U;
int var_18 = 515286500;
int zero = 0;
unsigned int var_20 = 3606794668U;
int var_21 = 1542333211;
unsigned short var_22 = (unsigned short)24943;
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
