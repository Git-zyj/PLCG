#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-99;
signed char var_4 = (signed char)-16;
short var_6 = (short)9752;
_Bool var_7 = (_Bool)0;
short var_8 = (short)-3889;
unsigned long long int var_9 = 9671982276717530974ULL;
signed char var_10 = (signed char)-52;
signed char var_12 = (signed char)123;
signed char var_13 = (signed char)-29;
short var_16 = (short)23979;
int zero = 0;
short var_17 = (short)-364;
short var_18 = (short)14200;
short var_19 = (short)7915;
unsigned short var_20 = (unsigned short)29878;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
