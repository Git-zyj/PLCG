#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)48572;
signed char var_9 = (signed char)-103;
short var_10 = (short)-25612;
unsigned int var_11 = 1396154576U;
int zero = 0;
short var_18 = (short)-14905;
unsigned long long int var_19 = 5441361384578492156ULL;
signed char var_20 = (signed char)14;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
