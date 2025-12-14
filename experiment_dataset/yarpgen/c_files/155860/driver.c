#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)35233;
long long int var_13 = 5836117540674136070LL;
long long int var_15 = 3218441966426482976LL;
unsigned long long int var_19 = 14877553717098784371ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)14;
long long int var_21 = -3094704067459031684LL;
void init() {
}

void checksum() {
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
