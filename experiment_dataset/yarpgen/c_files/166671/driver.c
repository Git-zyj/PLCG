#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3038;
short var_3 = (short)-18537;
unsigned long long int var_6 = 638833757445975832ULL;
_Bool var_8 = (_Bool)1;
short var_10 = (short)-27505;
short var_11 = (short)25908;
int zero = 0;
int var_14 = -1200685017;
int var_15 = -583936583;
signed char var_16 = (signed char)-33;
short var_17 = (short)23481;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
