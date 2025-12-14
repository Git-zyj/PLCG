#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25645;
unsigned short var_3 = (unsigned short)38649;
unsigned short var_6 = (unsigned short)26177;
_Bool var_7 = (_Bool)1;
_Bool var_10 = (_Bool)1;
unsigned short var_12 = (unsigned short)58652;
signed char var_13 = (signed char)120;
_Bool var_16 = (_Bool)1;
int zero = 0;
long long int var_18 = -1921725919668732482LL;
int var_19 = 171604304;
short var_20 = (short)-16207;
unsigned short var_21 = (unsigned short)20406;
void init() {
}

void checksum() {
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
