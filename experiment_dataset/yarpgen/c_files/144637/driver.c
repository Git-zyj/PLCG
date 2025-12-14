#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)10;
short var_6 = (short)26031;
unsigned int var_7 = 1850172491U;
int var_8 = 1460634797;
short var_9 = (short)-15279;
int zero = 0;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)115;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-63;
unsigned long long int var_21 = 17628214145301983441ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
