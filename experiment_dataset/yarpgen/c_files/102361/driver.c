#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)26932;
short var_7 = (short)26018;
signed char var_9 = (signed char)-10;
int zero = 0;
int var_14 = 1583928502;
unsigned char var_15 = (unsigned char)101;
signed char var_16 = (signed char)54;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
