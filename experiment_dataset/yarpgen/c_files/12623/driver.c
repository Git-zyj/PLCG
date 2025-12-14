#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51253;
unsigned char var_3 = (unsigned char)26;
_Bool var_7 = (_Bool)1;
short var_10 = (short)-31641;
int zero = 0;
long long int var_12 = 338845815372425986LL;
int var_13 = 1054811545;
void init() {
}

void checksum() {
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
