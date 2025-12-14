#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)155;
unsigned long long int var_10 = 4532019189653204306ULL;
unsigned short var_18 = (unsigned short)11383;
int zero = 0;
long long int var_19 = -3876404405482936227LL;
unsigned short var_20 = (unsigned short)62659;
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
