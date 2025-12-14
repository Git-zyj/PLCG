#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3709;
signed char var_1 = (signed char)31;
_Bool var_2 = (_Bool)0;
short var_3 = (short)18905;
short var_9 = (short)3159;
signed char var_10 = (signed char)-8;
int zero = 0;
unsigned short var_17 = (unsigned short)43243;
unsigned int var_18 = 1155289626U;
unsigned char var_19 = (unsigned char)26;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
