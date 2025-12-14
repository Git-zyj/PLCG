#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)0;
short var_6 = (short)31698;
unsigned int var_7 = 1110216940U;
unsigned char var_9 = (unsigned char)196;
long long int var_13 = -4433926832884606872LL;
int zero = 0;
short var_14 = (short)-28383;
long long int var_15 = 4151539270265700031LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
