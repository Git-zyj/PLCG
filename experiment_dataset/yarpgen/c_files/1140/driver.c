#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)101;
signed char var_1 = (signed char)69;
short var_5 = (short)-12330;
short var_9 = (short)-30089;
int zero = 0;
unsigned long long int var_20 = 13877078385273538351ULL;
unsigned char var_21 = (unsigned char)45;
signed char var_22 = (signed char)115;
short var_23 = (short)32735;
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
