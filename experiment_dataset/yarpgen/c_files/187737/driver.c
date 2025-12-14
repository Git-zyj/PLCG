#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-115;
int var_4 = 215172529;
unsigned char var_7 = (unsigned char)14;
int zero = 0;
unsigned short var_15 = (unsigned short)4125;
signed char var_16 = (signed char)84;
unsigned long long int var_17 = 13393540103385216001ULL;
void init() {
}

void checksum() {
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
