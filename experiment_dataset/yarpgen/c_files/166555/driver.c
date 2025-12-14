#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1193109879785580542LL;
signed char var_2 = (signed char)100;
unsigned char var_3 = (unsigned char)185;
unsigned int var_4 = 1786384807U;
unsigned int var_5 = 1144367321U;
int var_8 = 1121456171;
int zero = 0;
unsigned char var_10 = (unsigned char)119;
signed char var_11 = (signed char)-66;
_Bool var_12 = (_Bool)1;
short var_13 = (short)6826;
long long int var_14 = -4571406839190785886LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
