#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_3 = (signed char)-19;
unsigned char var_7 = (unsigned char)9;
signed char var_9 = (signed char)15;
_Bool var_11 = (_Bool)0;
short var_12 = (short)-29295;
int zero = 0;
unsigned long long int var_13 = 10799982564371669855ULL;
unsigned char var_14 = (unsigned char)194;
void init() {
}

void checksum() {
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
