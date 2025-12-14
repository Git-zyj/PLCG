#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)43462;
unsigned long long int var_5 = 17505170598563623825ULL;
long long int var_9 = -4316687639125244757LL;
long long int var_12 = 5477782947870608115LL;
int zero = 0;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-32607;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
