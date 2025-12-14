#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1338223481U;
long long int var_2 = -8126000329339384068LL;
unsigned char var_3 = (unsigned char)222;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-24731;
unsigned char var_6 = (unsigned char)188;
short var_9 = (short)-5469;
int zero = 0;
signed char var_10 = (signed char)-123;
unsigned char var_11 = (unsigned char)81;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
