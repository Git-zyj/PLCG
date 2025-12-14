#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)14352;
long long int var_6 = -6645518472027717352LL;
short var_8 = (short)-29362;
unsigned short var_18 = (unsigned short)6996;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-32;
unsigned long long int var_22 = 5904940152246700376ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
