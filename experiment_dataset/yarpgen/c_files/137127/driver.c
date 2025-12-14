#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3257582588U;
unsigned short var_4 = (unsigned short)64879;
unsigned char var_8 = (unsigned char)124;
int var_12 = 1825143862;
long long int var_17 = -1517198016669937076LL;
int zero = 0;
unsigned short var_18 = (unsigned short)16667;
signed char var_19 = (signed char)48;
long long int var_20 = 7151239688570773591LL;
short var_21 = (short)20155;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
