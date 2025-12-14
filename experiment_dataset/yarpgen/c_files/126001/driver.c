#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1959499707;
int var_5 = 1225612730;
unsigned short var_6 = (unsigned short)43286;
unsigned short var_10 = (unsigned short)56244;
unsigned short var_11 = (unsigned short)63784;
int zero = 0;
long long int var_12 = 7943828516324030552LL;
unsigned short var_13 = (unsigned short)42982;
unsigned short var_14 = (unsigned short)46336;
unsigned short var_15 = (unsigned short)11969;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
