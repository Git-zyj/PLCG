#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10096;
_Bool var_1 = (_Bool)0;
unsigned short var_6 = (unsigned short)30801;
int var_7 = -29604632;
signed char var_10 = (signed char)-104;
unsigned int var_11 = 1154088135U;
int zero = 0;
unsigned short var_12 = (unsigned short)17217;
short var_13 = (short)8610;
unsigned long long int var_14 = 15176024355726461169ULL;
unsigned char var_15 = (unsigned char)236;
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
