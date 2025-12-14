#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 7988770690176549296LL;
short var_5 = (short)12567;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)122;
unsigned long long int var_12 = 8782602113570112120ULL;
int zero = 0;
long long int var_13 = 1065246477103294330LL;
unsigned char var_14 = (unsigned char)144;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
