#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -250381961;
signed char var_3 = (signed char)19;
int var_6 = 941819556;
unsigned short var_8 = (unsigned short)57598;
int zero = 0;
unsigned short var_12 = (unsigned short)36171;
_Bool var_13 = (_Bool)0;
short var_14 = (short)9236;
unsigned char var_15 = (unsigned char)38;
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
