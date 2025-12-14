#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24156;
signed char var_1 = (signed char)-17;
unsigned char var_2 = (unsigned char)248;
long long int var_3 = 3064201523389866194LL;
unsigned short var_4 = (unsigned short)18408;
signed char var_5 = (signed char)119;
unsigned char var_6 = (unsigned char)116;
short var_7 = (short)-11901;
long long int var_9 = -7204459619052472806LL;
int zero = 0;
signed char var_10 = (signed char)73;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)176;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
