#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13758003537794132608ULL;
int var_2 = -793634733;
int var_7 = 1063344198;
long long int var_8 = -8402342571003216670LL;
signed char var_14 = (signed char)-60;
unsigned long long int var_17 = 12034749168547819223ULL;
int zero = 0;
signed char var_20 = (signed char)-101;
int var_21 = 1410519926;
signed char var_22 = (signed char)-110;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
