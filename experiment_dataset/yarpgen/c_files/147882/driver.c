#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2482749377U;
int var_7 = -1367483083;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)-10;
unsigned int var_14 = 2317509535U;
unsigned short var_15 = (unsigned short)63190;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
