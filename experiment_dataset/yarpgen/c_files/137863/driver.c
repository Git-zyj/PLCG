#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4063432899U;
unsigned long long int var_3 = 14725679015648108608ULL;
signed char var_5 = (signed char)-10;
short var_6 = (short)4294;
short var_8 = (short)-8945;
unsigned char var_9 = (unsigned char)163;
int zero = 0;
unsigned char var_10 = (unsigned char)169;
signed char var_11 = (signed char)-10;
unsigned long long int var_12 = 6539931314788417520ULL;
int var_13 = -1471205948;
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
