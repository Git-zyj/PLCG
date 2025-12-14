#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 273342033;
unsigned char var_3 = (unsigned char)48;
int var_4 = -1088721723;
_Bool var_6 = (_Bool)0;
_Bool var_12 = (_Bool)1;
unsigned short var_15 = (unsigned short)44004;
int zero = 0;
unsigned short var_17 = (unsigned short)51088;
short var_18 = (short)5855;
signed char var_19 = (signed char)82;
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
