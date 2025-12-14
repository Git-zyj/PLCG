#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)253;
unsigned char var_6 = (unsigned char)23;
short var_7 = (short)258;
signed char var_9 = (signed char)41;
_Bool var_12 = (_Bool)1;
signed char var_14 = (signed char)-74;
int var_16 = -1031092170;
short var_17 = (short)-23420;
signed char var_19 = (signed char)76;
int zero = 0;
unsigned char var_20 = (unsigned char)40;
unsigned short var_21 = (unsigned short)16886;
unsigned char var_22 = (unsigned char)245;
unsigned int var_23 = 884233543U;
int var_24 = 1498379613;
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
