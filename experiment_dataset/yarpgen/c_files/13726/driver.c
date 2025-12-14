#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-9849;
long long int var_3 = 4822203540072223594LL;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 1733140620U;
unsigned long long int var_6 = 753064099758235616ULL;
unsigned int var_7 = 1300726366U;
signed char var_8 = (signed char)20;
int zero = 0;
signed char var_11 = (signed char)31;
long long int var_12 = -3413345904161435829LL;
long long int var_13 = -4559970704129902613LL;
void init() {
}

void checksum() {
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
