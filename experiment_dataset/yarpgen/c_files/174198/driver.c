#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)50;
signed char var_5 = (signed char)117;
_Bool var_9 = (_Bool)0;
short var_10 = (short)7203;
signed char var_13 = (signed char)-58;
int zero = 0;
signed char var_15 = (signed char)106;
signed char var_16 = (signed char)-119;
unsigned short var_17 = (unsigned short)43921;
unsigned short var_18 = (unsigned short)50359;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
