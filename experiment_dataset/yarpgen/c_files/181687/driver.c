#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5125116951243861731LL;
int var_2 = 700100938;
short var_3 = (short)-6441;
signed char var_5 = (signed char)63;
unsigned char var_9 = (unsigned char)2;
long long int var_14 = 3437742600540172372LL;
unsigned long long int var_16 = 749665540686420527ULL;
short var_17 = (short)24211;
int zero = 0;
unsigned int var_19 = 3490900390U;
long long int var_20 = -1332024575069066627LL;
void init() {
}

void checksum() {
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
