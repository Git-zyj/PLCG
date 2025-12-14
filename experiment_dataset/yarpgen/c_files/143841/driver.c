#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 307965387;
long long int var_8 = -8578918585863959754LL;
signed char var_9 = (signed char)-103;
_Bool var_11 = (_Bool)1;
short var_13 = (short)-12926;
int zero = 0;
unsigned char var_17 = (unsigned char)233;
unsigned char var_18 = (unsigned char)24;
unsigned int var_19 = 1206143762U;
int var_20 = 300555798;
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
