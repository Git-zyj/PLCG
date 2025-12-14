#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-28867;
unsigned int var_10 = 715950533U;
unsigned long long int var_11 = 728354842913125452ULL;
int zero = 0;
_Bool var_13 = (_Bool)0;
int var_14 = 1153907594;
signed char var_15 = (signed char)-96;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
