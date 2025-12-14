#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)200;
unsigned short var_3 = (unsigned short)54907;
unsigned long long int var_4 = 7268964150182319245ULL;
short var_8 = (short)-29094;
long long int var_11 = 9208064505891680144LL;
unsigned long long int var_12 = 3444109377124749237ULL;
int zero = 0;
unsigned long long int var_15 = 10840073109208030687ULL;
_Bool var_16 = (_Bool)1;
int var_17 = -79983261;
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
