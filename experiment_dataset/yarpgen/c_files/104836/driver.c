#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 9134036066168186673LL;
signed char var_4 = (signed char)72;
signed char var_7 = (signed char)79;
short var_8 = (short)-12539;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)31;
int zero = 0;
unsigned char var_14 = (unsigned char)141;
unsigned long long int var_15 = 13077963796001853376ULL;
void init() {
}

void checksum() {
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
