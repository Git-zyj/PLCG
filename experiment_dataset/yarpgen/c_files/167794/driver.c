#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14920;
unsigned char var_1 = (unsigned char)15;
unsigned char var_3 = (unsigned char)186;
unsigned short var_7 = (unsigned short)49057;
int zero = 0;
long long int var_10 = -8173859477286641435LL;
unsigned short var_11 = (unsigned short)27696;
_Bool var_12 = (_Bool)0;
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
