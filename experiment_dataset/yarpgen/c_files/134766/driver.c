#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)17379;
signed char var_5 = (signed char)-78;
signed char var_6 = (signed char)120;
unsigned int var_7 = 3715628881U;
long long int var_8 = -3787451283895249327LL;
unsigned long long int var_10 = 3514191101340275034ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)54090;
unsigned short var_13 = (unsigned short)47138;
unsigned char var_14 = (unsigned char)111;
short var_15 = (short)-23204;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
