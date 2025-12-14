#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 11269766055703602863ULL;
short var_4 = (short)32656;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
int zero = 0;
int var_10 = 409409096;
short var_11 = (short)7462;
unsigned char var_12 = (unsigned char)60;
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
