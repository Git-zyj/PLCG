#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)33124;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)23322;
unsigned char var_17 = (unsigned char)140;
int zero = 0;
long long int var_19 = -4186463600785949642LL;
long long int var_20 = 6237573659642076993LL;
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
