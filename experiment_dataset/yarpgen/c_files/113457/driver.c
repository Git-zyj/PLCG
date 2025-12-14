#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_10 = (short)20509;
unsigned long long int var_13 = 10685373652705776693ULL;
_Bool var_16 = (_Bool)1;
short var_19 = (short)-1609;
int zero = 0;
signed char var_20 = (signed char)-2;
unsigned char var_21 = (unsigned char)109;
long long int var_22 = 5772338328861501155LL;
long long int var_23 = -7048233518638875094LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
