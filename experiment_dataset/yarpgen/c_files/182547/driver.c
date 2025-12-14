#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 1826927271886282226LL;
unsigned long long int var_11 = 16378655291345057301ULL;
short var_14 = (short)6818;
int zero = 0;
unsigned short var_15 = (unsigned short)15945;
signed char var_16 = (signed char)-43;
long long int var_17 = 6409470922450344925LL;
unsigned char var_18 = (unsigned char)17;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
