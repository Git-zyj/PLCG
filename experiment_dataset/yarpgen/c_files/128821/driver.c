#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)107;
unsigned int var_7 = 2501240831U;
unsigned long long int var_9 = 17165199225693659644ULL;
int zero = 0;
int var_12 = 899420605;
unsigned short var_13 = (unsigned short)56549;
unsigned char var_14 = (unsigned char)223;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
