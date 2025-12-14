#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)25;
unsigned char var_4 = (unsigned char)117;
unsigned int var_8 = 1428690723U;
int zero = 0;
short var_14 = (short)9732;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-5;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
