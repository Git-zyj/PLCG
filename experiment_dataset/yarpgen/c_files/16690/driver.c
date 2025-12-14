#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8033932227682665514LL;
unsigned char var_4 = (unsigned char)104;
short var_5 = (short)16787;
int var_6 = -1538811361;
unsigned int var_7 = 540744807U;
int zero = 0;
unsigned long long int var_11 = 5493723505582545640ULL;
int var_12 = 127959403;
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
