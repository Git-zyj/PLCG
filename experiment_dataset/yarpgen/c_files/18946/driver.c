#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2115;
unsigned short var_2 = (unsigned short)33092;
unsigned short var_4 = (unsigned short)35035;
unsigned short var_6 = (unsigned short)40095;
signed char var_8 = (signed char)-124;
short var_10 = (short)-30784;
signed char var_13 = (signed char)-13;
int zero = 0;
signed char var_14 = (signed char)25;
signed char var_15 = (signed char)121;
long long int var_16 = -9073701876070941226LL;
void init() {
}

void checksum() {
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
