#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)60384;
_Bool var_8 = (_Bool)1;
unsigned short var_10 = (unsigned short)43003;
int var_12 = -2064162152;
short var_17 = (short)1074;
int zero = 0;
unsigned short var_18 = (unsigned short)47288;
signed char var_19 = (signed char)-79;
void init() {
}

void checksum() {
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
