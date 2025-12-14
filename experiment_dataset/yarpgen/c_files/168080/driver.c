#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_2 = (signed char)-19;
unsigned short var_6 = (unsigned short)41160;
short var_11 = (short)19019;
_Bool var_12 = (_Bool)0;
unsigned long long int var_14 = 4554654366834296712ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)250;
unsigned char var_20 = (unsigned char)107;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
