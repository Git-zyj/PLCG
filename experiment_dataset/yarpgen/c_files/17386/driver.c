#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3446924472U;
unsigned char var_5 = (unsigned char)243;
long long int var_7 = -5254778229072995460LL;
signed char var_8 = (signed char)-63;
signed char var_12 = (signed char)110;
short var_13 = (short)-20668;
_Bool var_14 = (_Bool)1;
unsigned int var_17 = 4024653504U;
int zero = 0;
unsigned char var_19 = (unsigned char)251;
int var_20 = 537229179;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-3;
long long int var_23 = 8458807517929439037LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
