#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21888;
short var_5 = (short)-5083;
unsigned char var_7 = (unsigned char)194;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)211;
int zero = 0;
_Bool var_10 = (_Bool)1;
int var_11 = -521548008;
long long int var_12 = 8394894430999117494LL;
int var_13 = 1308111438;
long long int var_14 = -1120780652787067730LL;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)38;
short var_17 = (short)-29716;
unsigned long long int var_18 = 17827910060584602584ULL;
signed char var_19 = (signed char)119;
unsigned char var_20 = (unsigned char)119;
unsigned long long int var_21 = 8023218281879801102ULL;
short var_22 = (short)6538;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
