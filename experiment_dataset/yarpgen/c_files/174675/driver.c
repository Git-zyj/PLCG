#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-3826;
long long int var_5 = 3274761703483870163LL;
short var_6 = (short)14433;
long long int var_7 = 6165734121893666542LL;
long long int var_8 = 5158684604621850031LL;
unsigned char var_9 = (unsigned char)88;
int zero = 0;
short var_11 = (short)23041;
unsigned char var_12 = (unsigned char)152;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
