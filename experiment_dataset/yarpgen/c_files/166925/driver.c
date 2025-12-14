#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-32;
unsigned long long int var_4 = 4363820258817708581ULL;
_Bool var_5 = (_Bool)0;
short var_7 = (short)29465;
unsigned long long int var_8 = 12431438152727530651ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)141;
unsigned long long int var_11 = 11538542561245887173ULL;
short var_12 = (short)9495;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
