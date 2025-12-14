#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6008237062293792587ULL;
signed char var_5 = (signed char)18;
unsigned short var_6 = (unsigned short)60485;
long long int var_7 = 3210764105494974680LL;
int zero = 0;
unsigned long long int var_11 = 9198910526873900376ULL;
unsigned char var_12 = (unsigned char)135;
long long int var_13 = -1200587670618883017LL;
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
