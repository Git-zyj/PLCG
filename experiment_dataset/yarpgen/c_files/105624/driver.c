#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)199;
long long int var_2 = 2893771439431833213LL;
short var_3 = (short)-7279;
signed char var_4 = (signed char)-54;
_Bool var_7 = (_Bool)1;
short var_8 = (short)8587;
unsigned int var_11 = 1779786354U;
_Bool var_12 = (_Bool)1;
int zero = 0;
long long int var_17 = -7216044667524889790LL;
int var_18 = 758938624;
unsigned long long int var_19 = 13915588935760302196ULL;
signed char var_20 = (signed char)84;
long long int var_21 = -2144889765584254606LL;
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
