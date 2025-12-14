#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 958829814;
unsigned short var_6 = (unsigned short)49657;
long long int var_10 = -2255074215440175424LL;
int zero = 0;
int var_12 = 2029128645;
short var_13 = (short)-12576;
unsigned short var_14 = (unsigned short)3368;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
