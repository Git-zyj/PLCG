#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7182245141984202530LL;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)58398;
short var_6 = (short)26229;
unsigned short var_7 = (unsigned short)56936;
_Bool var_8 = (_Bool)1;
int zero = 0;
signed char var_12 = (signed char)73;
unsigned char var_13 = (unsigned char)186;
long long int var_14 = 2454932610669870739LL;
unsigned int var_15 = 4121835629U;
void init() {
}

void checksum() {
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
