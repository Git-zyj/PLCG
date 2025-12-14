#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -719567759977487275LL;
unsigned char var_3 = (unsigned char)251;
unsigned long long int var_4 = 50974658404853176ULL;
unsigned short var_8 = (unsigned short)12144;
unsigned short var_16 = (unsigned short)56810;
int zero = 0;
signed char var_18 = (signed char)-31;
unsigned int var_19 = 1396850176U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
