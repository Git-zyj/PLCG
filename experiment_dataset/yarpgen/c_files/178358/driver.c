#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2319045287U;
unsigned short var_7 = (unsigned short)13185;
unsigned long long int var_10 = 365490337200257404ULL;
_Bool var_14 = (_Bool)1;
signed char var_18 = (signed char)82;
int zero = 0;
short var_20 = (short)23577;
short var_21 = (short)-4539;
short var_22 = (short)-1439;
unsigned long long int var_23 = 3590492054129954636ULL;
short var_24 = (short)27025;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
