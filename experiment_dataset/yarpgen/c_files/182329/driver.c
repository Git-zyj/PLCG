#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)13;
short var_1 = (short)-10264;
short var_7 = (short)31726;
_Bool var_8 = (_Bool)0;
unsigned short var_12 = (unsigned short)47555;
short var_16 = (short)9147;
int zero = 0;
short var_17 = (short)7216;
unsigned short var_18 = (unsigned short)18866;
short var_19 = (short)9432;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
