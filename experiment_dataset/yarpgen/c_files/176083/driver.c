#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2001938103U;
unsigned short var_9 = (unsigned short)1436;
unsigned int var_10 = 623813333U;
unsigned short var_14 = (unsigned short)55163;
int zero = 0;
int var_20 = -1537810243;
int var_21 = -2009971812;
unsigned int var_22 = 369808220U;
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
