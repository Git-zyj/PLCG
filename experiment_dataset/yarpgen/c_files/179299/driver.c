#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-88;
signed char var_1 = (signed char)68;
unsigned char var_5 = (unsigned char)25;
unsigned char var_6 = (unsigned char)46;
unsigned char var_7 = (unsigned char)220;
signed char var_9 = (signed char)-78;
signed char var_11 = (signed char)116;
signed char var_13 = (signed char)-119;
unsigned char var_18 = (unsigned char)160;
int zero = 0;
unsigned char var_20 = (unsigned char)240;
signed char var_21 = (signed char)81;
signed char var_22 = (signed char)96;
unsigned char var_23 = (unsigned char)207;
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
