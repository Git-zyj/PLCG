#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-74;
long long int var_4 = 958013357505528907LL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 16056723162288137937ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)27;
signed char var_13 = (signed char)41;
short var_14 = (short)7273;
short var_15 = (short)-18141;
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
