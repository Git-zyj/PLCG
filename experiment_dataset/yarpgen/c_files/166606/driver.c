#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)40;
unsigned int var_1 = 1731538714U;
unsigned short var_3 = (unsigned short)53283;
unsigned int var_4 = 1685144299U;
long long int var_6 = -8223129730161574546LL;
signed char var_8 = (signed char)-39;
unsigned short var_9 = (unsigned short)40742;
int zero = 0;
short var_11 = (short)8437;
unsigned int var_12 = 519184521U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
