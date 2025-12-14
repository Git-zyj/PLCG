#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)100;
unsigned char var_2 = (unsigned char)78;
long long int var_3 = -5463467240292491379LL;
int var_6 = -799300877;
short var_12 = (short)-19502;
int zero = 0;
short var_18 = (short)-9163;
unsigned short var_19 = (unsigned short)50328;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
