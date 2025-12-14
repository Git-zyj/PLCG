#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -82640930;
signed char var_10 = (signed char)-37;
short var_11 = (short)11466;
signed char var_14 = (signed char)40;
unsigned char var_16 = (unsigned char)247;
unsigned int var_17 = 1913439728U;
int var_18 = -1200493103;
int zero = 0;
_Bool var_20 = (_Bool)1;
int var_21 = -621180570;
int var_22 = 246117942;
unsigned long long int var_23 = 7010077900060301752ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
