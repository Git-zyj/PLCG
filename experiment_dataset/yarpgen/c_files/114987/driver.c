#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)27974;
signed char var_4 = (signed char)-98;
long long int var_5 = 2429845600385468524LL;
unsigned long long int var_8 = 12031462291721570334ULL;
short var_10 = (short)32031;
int zero = 0;
short var_11 = (short)23271;
short var_12 = (short)30367;
_Bool var_13 = (_Bool)1;
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
