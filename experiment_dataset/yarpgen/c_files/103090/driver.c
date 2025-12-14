#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 1932687853232821560LL;
unsigned short var_4 = (unsigned short)8654;
unsigned short var_5 = (unsigned short)34714;
unsigned short var_7 = (unsigned short)27137;
unsigned char var_8 = (unsigned char)110;
int zero = 0;
_Bool var_15 = (_Bool)1;
long long int var_16 = -1701393553454642440LL;
unsigned short var_17 = (unsigned short)24344;
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
