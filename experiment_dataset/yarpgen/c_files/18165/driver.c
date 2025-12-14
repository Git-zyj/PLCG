#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 140252421U;
long long int var_2 = -1626619301551005808LL;
long long int var_5 = -8673419391969477385LL;
unsigned char var_8 = (unsigned char)146;
unsigned short var_14 = (unsigned short)38745;
unsigned char var_17 = (unsigned char)220;
int zero = 0;
short var_18 = (short)2442;
int var_19 = 1802310367;
short var_20 = (short)21853;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
