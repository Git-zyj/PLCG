#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
int var_7 = 2011250861;
unsigned short var_9 = (unsigned short)25474;
int zero = 0;
unsigned char var_17 = (unsigned char)181;
signed char var_18 = (signed char)-11;
signed char var_19 = (signed char)-66;
short var_20 = (short)22787;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
