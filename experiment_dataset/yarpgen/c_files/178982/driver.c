#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)32;
unsigned short var_2 = (unsigned short)8078;
unsigned short var_4 = (unsigned short)58090;
unsigned int var_5 = 2056461677U;
long long int var_6 = 1393809763253679529LL;
signed char var_7 = (signed char)-79;
long long int var_8 = 3377011159636701791LL;
_Bool var_12 = (_Bool)0;
short var_14 = (short)26926;
unsigned char var_15 = (unsigned char)135;
short var_16 = (short)14124;
unsigned char var_19 = (unsigned char)155;
int zero = 0;
unsigned char var_20 = (unsigned char)79;
unsigned int var_21 = 323515638U;
unsigned long long int var_22 = 11607328047017229292ULL;
int var_23 = 1706446788;
unsigned char var_24 = (unsigned char)170;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
