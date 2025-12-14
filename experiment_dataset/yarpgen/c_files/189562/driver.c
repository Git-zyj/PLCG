#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17034101435826424630ULL;
short var_7 = (short)11948;
unsigned long long int var_10 = 12003388510652370386ULL;
unsigned char var_11 = (unsigned char)142;
unsigned int var_12 = 1725980617U;
unsigned int var_13 = 2466368849U;
int zero = 0;
unsigned int var_19 = 2393470207U;
unsigned char var_20 = (unsigned char)40;
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
