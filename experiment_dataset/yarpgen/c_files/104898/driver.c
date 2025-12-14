#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)26091;
unsigned short var_5 = (unsigned short)37581;
short var_14 = (short)-4381;
int zero = 0;
unsigned long long int var_17 = 3031297075574053773ULL;
unsigned long long int var_18 = 15604281628611934576ULL;
void init() {
}

void checksum() {
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
