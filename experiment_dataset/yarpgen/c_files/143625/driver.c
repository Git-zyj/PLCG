#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12240;
short var_2 = (short)2893;
unsigned char var_4 = (unsigned char)104;
signed char var_7 = (signed char)-29;
unsigned short var_9 = (unsigned short)39022;
unsigned short var_13 = (unsigned short)24223;
int zero = 0;
unsigned int var_17 = 3979836589U;
int var_18 = 240302152;
signed char var_19 = (signed char)3;
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
