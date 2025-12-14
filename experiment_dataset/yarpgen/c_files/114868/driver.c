#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3730658946U;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)26202;
unsigned char var_5 = (unsigned char)13;
unsigned int var_6 = 1500332040U;
unsigned char var_7 = (unsigned char)18;
int var_9 = 1219487267;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_13 = 928399869;
int var_14 = 1861107587;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
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
