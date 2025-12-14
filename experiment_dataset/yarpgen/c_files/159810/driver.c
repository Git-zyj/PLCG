#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-1328;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)-100;
signed char var_6 = (signed char)59;
signed char var_7 = (signed char)-79;
unsigned short var_9 = (unsigned short)60287;
int zero = 0;
unsigned short var_17 = (unsigned short)28521;
short var_18 = (short)17111;
short var_19 = (short)-5259;
_Bool var_20 = (_Bool)1;
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
