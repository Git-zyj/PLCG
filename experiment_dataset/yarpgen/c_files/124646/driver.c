#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1011815140U;
unsigned char var_4 = (unsigned char)61;
unsigned long long int var_9 = 14532159283099894543ULL;
unsigned long long int var_11 = 11886397518397934858ULL;
int zero = 0;
int var_19 = 940159140;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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
