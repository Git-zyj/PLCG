#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)16693;
int var_5 = -1502383667;
unsigned int var_6 = 189704603U;
unsigned long long int var_8 = 14578920222894775809ULL;
unsigned int var_9 = 2066567071U;
unsigned long long int var_15 = 16102393677617238332ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)117;
unsigned int var_19 = 2692666481U;
unsigned char var_20 = (unsigned char)5;
void init() {
}

void checksum() {
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
