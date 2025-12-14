#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)243;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)-63;
unsigned long long int var_6 = 11535540909848182931ULL;
unsigned short var_7 = (unsigned short)32002;
_Bool var_9 = (_Bool)0;
signed char var_13 = (signed char)79;
unsigned long long int var_15 = 12552902272935773597ULL;
int zero = 0;
unsigned long long int var_17 = 17822627540140053513ULL;
unsigned short var_18 = (unsigned short)55154;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-18527;
unsigned short var_21 = (unsigned short)14561;
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
