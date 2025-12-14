#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 106486918;
short var_2 = (short)5170;
unsigned short var_3 = (unsigned short)31350;
unsigned int var_4 = 1749992704U;
unsigned short var_5 = (unsigned short)32289;
int zero = 0;
long long int var_11 = -1557906358403562437LL;
int var_12 = -765425000;
short var_13 = (short)28272;
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
