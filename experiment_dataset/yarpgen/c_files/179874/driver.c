#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1409090832;
_Bool var_3 = (_Bool)1;
unsigned long long int var_6 = 3152753878146130913ULL;
long long int var_10 = -7486502676918279469LL;
short var_11 = (short)28718;
unsigned int var_13 = 1554521577U;
int zero = 0;
long long int var_14 = -3032278739168952316LL;
int var_15 = 1869779940;
void init() {
}

void checksum() {
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
