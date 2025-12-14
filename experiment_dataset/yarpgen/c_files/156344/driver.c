#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-22;
_Bool var_4 = (_Bool)1;
unsigned char var_6 = (unsigned char)196;
signed char var_14 = (signed char)58;
unsigned long long int var_15 = 14619793594649500360ULL;
unsigned short var_19 = (unsigned short)26960;
int zero = 0;
signed char var_20 = (signed char)30;
short var_21 = (short)26981;
void init() {
}

void checksum() {
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
