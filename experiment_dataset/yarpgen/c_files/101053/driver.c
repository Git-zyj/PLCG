#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4174521691U;
short var_2 = (short)28209;
signed char var_3 = (signed char)81;
unsigned char var_4 = (unsigned char)188;
_Bool var_5 = (_Bool)0;
unsigned char var_7 = (unsigned char)133;
short var_12 = (short)-2234;
unsigned short var_13 = (unsigned short)61853;
unsigned int var_14 = 4293659230U;
int zero = 0;
short var_16 = (short)-1596;
unsigned long long int var_17 = 10502681983108512987ULL;
void init() {
}

void checksum() {
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
