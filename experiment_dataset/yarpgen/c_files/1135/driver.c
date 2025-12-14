#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3307997564U;
int var_6 = -1422433966;
long long int var_9 = -1598958037414631942LL;
unsigned long long int var_10 = 6534823723250360229ULL;
int zero = 0;
unsigned long long int var_13 = 9407265295379050826ULL;
long long int var_14 = -7336195606171244414LL;
short var_15 = (short)-4076;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
