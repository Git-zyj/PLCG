#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 4399426U;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
short var_10 = (short)-5054;
short var_11 = (short)-12779;
int zero = 0;
short var_12 = (short)15082;
unsigned short var_13 = (unsigned short)20251;
short var_14 = (short)26439;
void init() {
}

void checksum() {
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
