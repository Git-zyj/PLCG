#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 12286085508114210353ULL;
unsigned char var_2 = (unsigned char)106;
short var_5 = (short)-6358;
unsigned long long int var_6 = 6272681715262380906ULL;
unsigned short var_8 = (unsigned short)3433;
int zero = 0;
unsigned char var_10 = (unsigned char)39;
signed char var_11 = (signed char)25;
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
