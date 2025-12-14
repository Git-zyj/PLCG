#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1896223518;
_Bool var_2 = (_Bool)1;
short var_7 = (short)-7165;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned int var_12 = 4227791702U;
unsigned long long int var_13 = 5582333312852981158ULL;
int var_14 = -831385818;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
