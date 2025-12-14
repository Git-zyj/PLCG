#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -8938019006513833536LL;
int var_7 = -1566671450;
long long int var_13 = -2786566540444861933LL;
unsigned long long int var_17 = 4517006604833703710ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)24860;
unsigned short var_20 = (unsigned short)41217;
long long int var_21 = 8221402507862358733LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
