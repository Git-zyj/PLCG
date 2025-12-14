#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_3 = 6865075407176594595ULL;
int var_4 = 2108240149;
long long int var_6 = -7853452990051994736LL;
int var_7 = 943472469;
unsigned long long int var_8 = 18247051758666172439ULL;
unsigned short var_10 = (unsigned short)3369;
signed char var_11 = (signed char)-86;
int zero = 0;
signed char var_12 = (signed char)-61;
unsigned int var_13 = 2886068315U;
signed char var_14 = (signed char)-34;
unsigned int var_15 = 4014941919U;
unsigned char var_16 = (unsigned char)152;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
