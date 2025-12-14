#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_2 = (short)-16956;
short var_3 = (short)14129;
short var_5 = (short)-1032;
short var_11 = (short)-1933;
unsigned long long int var_13 = 16788362030424158994ULL;
int zero = 0;
short var_19 = (short)1546;
signed char var_20 = (signed char)-58;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
