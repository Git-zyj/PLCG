#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)51313;
unsigned short var_7 = (unsigned short)35274;
unsigned long long int var_10 = 16713238700839708145ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)31352;
unsigned long long int var_13 = 133889214377907595ULL;
unsigned short var_14 = (unsigned short)446;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
