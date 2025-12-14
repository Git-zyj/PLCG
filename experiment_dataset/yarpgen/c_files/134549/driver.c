#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64945;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)25123;
unsigned int var_3 = 1402784175U;
unsigned int var_5 = 1410568735U;
int var_6 = -968259659;
short var_8 = (short)9638;
unsigned int var_9 = 1045603648U;
int zero = 0;
signed char var_11 = (signed char)104;
signed char var_12 = (signed char)-21;
unsigned short var_13 = (unsigned short)25018;
unsigned short var_14 = (unsigned short)50228;
short var_15 = (short)26314;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
