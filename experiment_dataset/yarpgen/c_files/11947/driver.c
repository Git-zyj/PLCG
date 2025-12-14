#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-8407;
signed char var_5 = (signed char)101;
unsigned long long int var_6 = 4263202683606820757ULL;
unsigned char var_14 = (unsigned char)105;
int zero = 0;
short var_17 = (short)28044;
signed char var_18 = (signed char)-108;
long long int var_19 = 357652349467560685LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
