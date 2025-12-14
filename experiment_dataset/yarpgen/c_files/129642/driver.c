#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7932;
unsigned char var_3 = (unsigned char)118;
unsigned char var_5 = (unsigned char)10;
signed char var_6 = (signed char)109;
long long int var_8 = 4073079007075284486LL;
short var_11 = (short)8830;
int zero = 0;
unsigned long long int var_12 = 11101488200818031608ULL;
unsigned char var_13 = (unsigned char)50;
void init() {
}

void checksum() {
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
