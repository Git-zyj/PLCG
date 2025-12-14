#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-18449;
long long int var_7 = 4766119877360999891LL;
int zero = 0;
unsigned char var_11 = (unsigned char)41;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 11733915409245524465ULL;
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
