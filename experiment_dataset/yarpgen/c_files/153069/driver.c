#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)135;
unsigned short var_1 = (unsigned short)46850;
short var_2 = (short)-5938;
short var_3 = (short)8279;
unsigned short var_4 = (unsigned short)43973;
unsigned char var_5 = (unsigned char)105;
unsigned int var_6 = 2461880351U;
unsigned short var_7 = (unsigned short)39011;
signed char var_8 = (signed char)-54;
unsigned short var_9 = (unsigned short)18260;
signed char var_12 = (signed char)32;
int zero = 0;
unsigned int var_13 = 311458823U;
unsigned char var_14 = (unsigned char)40;
unsigned char var_15 = (unsigned char)198;
unsigned char var_16 = (unsigned char)180;
unsigned int var_17 = 3187596851U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
