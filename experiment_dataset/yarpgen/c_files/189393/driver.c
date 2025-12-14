#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6048135611953978793LL;
unsigned long long int var_3 = 9561644945594862500ULL;
unsigned short var_5 = (unsigned short)27960;
int var_10 = 831379456;
int zero = 0;
unsigned char var_14 = (unsigned char)28;
unsigned long long int var_15 = 13446693842706004529ULL;
unsigned int var_16 = 110931192U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
