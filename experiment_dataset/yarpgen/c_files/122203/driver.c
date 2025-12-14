#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 9048357480002730085LL;
unsigned short var_2 = (unsigned short)6430;
long long int var_3 = 6484440962149204401LL;
unsigned short var_4 = (unsigned short)24711;
unsigned int var_5 = 2097330464U;
signed char var_6 = (signed char)6;
unsigned char var_7 = (unsigned char)114;
signed char var_8 = (signed char)-30;
int zero = 0;
unsigned short var_10 = (unsigned short)58078;
signed char var_11 = (signed char)93;
int var_12 = 1601706715;
signed char var_13 = (signed char)-90;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
