#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 4042784861342821572ULL;
signed char var_6 = (signed char)98;
long long int var_9 = 4612467511209602793LL;
unsigned char var_11 = (unsigned char)192;
int zero = 0;
unsigned short var_13 = (unsigned short)6678;
long long int var_14 = 2935821946230499211LL;
signed char var_15 = (signed char)-54;
unsigned int var_16 = 1110776443U;
short var_17 = (short)29096;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
