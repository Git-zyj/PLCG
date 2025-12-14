#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)28390;
long long int var_3 = 5907943372473365021LL;
signed char var_4 = (signed char)123;
int var_5 = 1117742927;
_Bool var_6 = (_Bool)1;
int var_9 = -1058162349;
int zero = 0;
int var_12 = -803348085;
short var_13 = (short)21129;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-51;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
