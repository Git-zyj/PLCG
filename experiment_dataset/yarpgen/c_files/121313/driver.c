#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5644252759472057582LL;
unsigned short var_1 = (unsigned short)32282;
_Bool var_4 = (_Bool)1;
unsigned int var_8 = 2514614441U;
unsigned short var_9 = (unsigned short)16310;
int zero = 0;
unsigned char var_10 = (unsigned char)239;
unsigned long long int var_11 = 15651328501093313361ULL;
unsigned char var_12 = (unsigned char)220;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
