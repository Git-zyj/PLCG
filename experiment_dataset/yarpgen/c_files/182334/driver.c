#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1538365503U;
signed char var_3 = (signed char)81;
unsigned char var_4 = (unsigned char)78;
unsigned int var_5 = 1495611309U;
short var_6 = (short)-2433;
unsigned char var_7 = (unsigned char)109;
signed char var_9 = (signed char)20;
int zero = 0;
unsigned char var_10 = (unsigned char)28;
unsigned int var_11 = 493052442U;
unsigned int var_12 = 3294932944U;
signed char var_13 = (signed char)45;
unsigned char var_14 = (unsigned char)36;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
