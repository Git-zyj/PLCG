#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9088241216211213487ULL;
unsigned char var_2 = (unsigned char)218;
unsigned long long int var_6 = 4767001092001688794ULL;
short var_8 = (short)6799;
int var_9 = -1814371079;
unsigned short var_10 = (unsigned short)52366;
unsigned char var_11 = (unsigned char)156;
signed char var_12 = (signed char)17;
int zero = 0;
unsigned short var_13 = (unsigned short)60859;
unsigned short var_14 = (unsigned short)32183;
signed char var_15 = (signed char)-64;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
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
