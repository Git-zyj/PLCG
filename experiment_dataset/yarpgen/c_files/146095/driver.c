#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54032;
unsigned char var_4 = (unsigned char)131;
_Bool var_6 = (_Bool)0;
int var_7 = 374147351;
unsigned char var_8 = (unsigned char)75;
int zero = 0;
unsigned long long int var_10 = 17245535603285422228ULL;
unsigned long long int var_11 = 7619747662647618259ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
