#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 28578436U;
unsigned long long int var_4 = 8959315567784538343ULL;
unsigned short var_5 = (unsigned short)16320;
int var_6 = -775740968;
signed char var_8 = (signed char)-71;
int zero = 0;
unsigned long long int var_11 = 7181841839677447428ULL;
signed char var_12 = (signed char)-64;
signed char var_13 = (signed char)40;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
