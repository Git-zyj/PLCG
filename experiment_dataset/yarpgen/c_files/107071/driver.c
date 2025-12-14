#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)52355;
unsigned int var_4 = 804257633U;
unsigned short var_5 = (unsigned short)52215;
unsigned long long int var_6 = 10906452713457546211ULL;
unsigned char var_9 = (unsigned char)60;
_Bool var_12 = (_Bool)0;
unsigned char var_14 = (unsigned char)198;
int zero = 0;
short var_18 = (short)1121;
short var_19 = (short)-11349;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
