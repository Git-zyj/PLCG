#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)407;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)48736;
int zero = 0;
unsigned short var_12 = (unsigned short)10393;
int var_13 = 1114901163;
int var_14 = 1789105975;
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
