#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6003187880914974892LL;
unsigned char var_1 = (unsigned char)51;
unsigned int var_6 = 1178849941U;
long long int var_7 = 605793737613581266LL;
int zero = 0;
unsigned int var_12 = 1641335201U;
long long int var_13 = -66903902798956912LL;
void init() {
}

void checksum() {
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
