#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1650369679;
signed char var_3 = (signed char)60;
unsigned long long int var_5 = 1215233235754364815ULL;
unsigned short var_7 = (unsigned short)30478;
unsigned int var_8 = 3797852714U;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-37;
short var_11 = (short)29507;
int zero = 0;
unsigned short var_15 = (unsigned short)23649;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-6788;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
