#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2068486224U;
long long int var_7 = -5174809397242516834LL;
unsigned long long int var_12 = 11182913045804235831ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)32049;
unsigned long long int var_14 = 7652751080782924043ULL;
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
