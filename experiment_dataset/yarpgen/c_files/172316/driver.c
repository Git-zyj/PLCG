#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)19853;
short var_2 = (short)2109;
unsigned char var_4 = (unsigned char)199;
unsigned long long int var_6 = 10358845614233179066ULL;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)26582;
unsigned short var_9 = (unsigned short)33075;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned short var_19 = (unsigned short)35703;
int var_20 = -2069703134;
unsigned short var_21 = (unsigned short)24367;
int var_22 = -671641617;
void init() {
}

void checksum() {
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
