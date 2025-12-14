#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-53;
unsigned int var_2 = 3183323912U;
unsigned char var_5 = (unsigned char)171;
unsigned char var_6 = (unsigned char)130;
int var_7 = -873040467;
signed char var_8 = (signed char)-83;
signed char var_9 = (signed char)95;
signed char var_10 = (signed char)-42;
int var_14 = -2116594587;
int zero = 0;
unsigned int var_17 = 3452935599U;
unsigned char var_18 = (unsigned char)223;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
