#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)28;
unsigned char var_6 = (unsigned char)147;
unsigned char var_8 = (unsigned char)219;
int var_9 = 232516673;
signed char var_10 = (signed char)44;
int zero = 0;
unsigned short var_19 = (unsigned short)61474;
int var_20 = -283675966;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
