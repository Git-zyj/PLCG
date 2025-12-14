#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1717317871;
long long int var_5 = 1731504781887369551LL;
unsigned short var_7 = (unsigned short)53669;
unsigned char var_8 = (unsigned char)110;
unsigned char var_11 = (unsigned char)136;
int zero = 0;
long long int var_12 = 4824964716169073396LL;
_Bool var_13 = (_Bool)0;
long long int var_14 = -2373334045054966958LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
