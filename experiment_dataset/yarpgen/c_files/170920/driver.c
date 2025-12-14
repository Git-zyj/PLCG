#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5665463098047771445LL;
int var_1 = 432325973;
_Bool var_3 = (_Bool)0;
long long int var_5 = 7898556781679277405LL;
long long int var_7 = 1857917033126771287LL;
unsigned char var_8 = (unsigned char)106;
int zero = 0;
unsigned long long int var_11 = 10673584524593258046ULL;
unsigned long long int var_12 = 13424583919111829170ULL;
unsigned int var_13 = 1776118445U;
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
