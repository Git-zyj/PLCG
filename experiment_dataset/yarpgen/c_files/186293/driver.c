#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)18885;
int var_4 = 459924214;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)43730;
unsigned long long int var_9 = 18258509693707622158ULL;
short var_10 = (short)-17445;
unsigned short var_15 = (unsigned short)60382;
int zero = 0;
unsigned short var_17 = (unsigned short)26042;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-39;
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
