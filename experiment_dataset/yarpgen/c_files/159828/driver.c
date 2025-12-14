#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)164;
_Bool var_7 = (_Bool)0;
long long int var_8 = -438635929897456975LL;
unsigned short var_10 = (unsigned short)64580;
int zero = 0;
unsigned short var_11 = (unsigned short)977;
unsigned char var_12 = (unsigned char)28;
void init() {
}

void checksum() {
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
