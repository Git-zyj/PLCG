#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2272909929U;
signed char var_3 = (signed char)-27;
unsigned int var_7 = 2683466779U;
unsigned short var_12 = (unsigned short)61278;
int zero = 0;
unsigned short var_13 = (unsigned short)31059;
short var_14 = (short)-31901;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
