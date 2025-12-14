#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)220;
long long int var_2 = -3337210656360546651LL;
unsigned int var_5 = 263738912U;
long long int var_7 = 8736199603306638889LL;
int zero = 0;
int var_20 = -483852859;
unsigned int var_21 = 3835725509U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
