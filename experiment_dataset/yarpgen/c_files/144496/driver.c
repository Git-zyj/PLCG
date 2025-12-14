#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-119;
_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)0;
signed char var_6 = (signed char)-23;
short var_7 = (short)-28472;
unsigned short var_9 = (unsigned short)180;
int zero = 0;
signed char var_13 = (signed char)-101;
unsigned short var_14 = (unsigned short)52116;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-28445;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
