#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)54;
short var_10 = (short)-15691;
signed char var_12 = (signed char)110;
unsigned short var_17 = (unsigned short)19193;
int zero = 0;
long long int var_20 = -9169026062405756845LL;
signed char var_21 = (signed char)33;
short var_22 = (short)11066;
unsigned char var_23 = (unsigned char)110;
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
