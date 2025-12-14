#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15295799305827967164ULL;
short var_1 = (short)-4411;
short var_4 = (short)-20640;
short var_5 = (short)-12503;
_Bool var_7 = (_Bool)1;
short var_8 = (short)2617;
unsigned int var_9 = 3759575292U;
long long int var_10 = -7077082860672878676LL;
unsigned char var_11 = (unsigned char)81;
unsigned int var_12 = 502862903U;
_Bool var_14 = (_Bool)0;
int var_15 = 626635825;
int zero = 0;
unsigned short var_16 = (unsigned short)9121;
signed char var_17 = (signed char)87;
unsigned char var_18 = (unsigned char)61;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
