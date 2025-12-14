#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5171488616101142734LL;
unsigned char var_1 = (unsigned char)24;
short var_2 = (short)-16385;
unsigned short var_7 = (unsigned short)6325;
short var_12 = (short)-32321;
unsigned short var_13 = (unsigned short)48350;
long long int var_16 = -377298132729774556LL;
int zero = 0;
unsigned short var_18 = (unsigned short)15371;
unsigned long long int var_19 = 5528692480328429889ULL;
long long int var_20 = -3602584486442813706LL;
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
