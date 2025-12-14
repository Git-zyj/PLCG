#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-90;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)27306;
unsigned short var_9 = (unsigned short)9536;
int zero = 0;
unsigned short var_10 = (unsigned short)61921;
unsigned short var_11 = (unsigned short)24458;
unsigned char var_12 = (unsigned char)150;
unsigned char var_13 = (unsigned char)56;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
