#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned short var_10 = (unsigned short)37586;
unsigned char var_13 = (unsigned char)216;
unsigned short var_19 = (unsigned short)61864;
int zero = 0;
unsigned long long int var_20 = 584109607664848432ULL;
unsigned short var_21 = (unsigned short)27217;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
