#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)79;
unsigned short var_1 = (unsigned short)27490;
unsigned short var_2 = (unsigned short)55747;
unsigned int var_3 = 3864008205U;
unsigned short var_7 = (unsigned short)602;
signed char var_8 = (signed char)63;
signed char var_9 = (signed char)-112;
signed char var_13 = (signed char)127;
int zero = 0;
signed char var_15 = (signed char)-4;
unsigned int var_16 = 3585331180U;
void init() {
}

void checksum() {
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
