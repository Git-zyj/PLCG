#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-31;
unsigned char var_2 = (unsigned char)32;
unsigned char var_3 = (unsigned char)202;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)79;
signed char var_9 = (signed char)127;
unsigned char var_10 = (unsigned char)69;
int zero = 0;
long long int var_14 = -4479178005633688071LL;
int var_15 = 1290931611;
signed char var_16 = (signed char)106;
signed char var_17 = (signed char)4;
signed char var_18 = (signed char)-42;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
