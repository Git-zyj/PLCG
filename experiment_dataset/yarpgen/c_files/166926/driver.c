#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)5581;
unsigned long long int var_4 = 12378760645999099590ULL;
unsigned short var_5 = (unsigned short)38801;
long long int var_9 = -6327807816734647237LL;
unsigned int var_14 = 3178261503U;
int zero = 0;
unsigned long long int var_19 = 17322057082438626304ULL;
unsigned char var_20 = (unsigned char)63;
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
