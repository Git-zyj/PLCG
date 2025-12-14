#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)36633;
unsigned int var_3 = 1471857524U;
unsigned long long int var_6 = 6845726672152528459ULL;
int zero = 0;
long long int var_12 = -3300233757576635850LL;
int var_13 = -1261084855;
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
