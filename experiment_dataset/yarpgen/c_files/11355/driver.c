#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)6156;
int var_7 = -1819480245;
short var_10 = (short)27399;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 1850540179U;
signed char var_21 = (signed char)-25;
unsigned char var_22 = (unsigned char)236;
unsigned short var_23 = (unsigned short)31527;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
