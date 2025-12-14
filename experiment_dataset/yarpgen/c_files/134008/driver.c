#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_13 = (unsigned short)18026;
_Bool var_14 = (_Bool)1;
unsigned long long int var_17 = 5106604679927158806ULL;
int zero = 0;
int var_18 = 121049440;
short var_19 = (short)-31612;
short var_20 = (short)-15274;
unsigned long long int var_21 = 8906368682701912996ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
