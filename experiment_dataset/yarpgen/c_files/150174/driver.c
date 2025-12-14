#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1211559203;
short var_1 = (short)-4730;
unsigned int var_7 = 1955177804U;
unsigned short var_8 = (unsigned short)48911;
unsigned char var_9 = (unsigned char)162;
int zero = 0;
signed char var_12 = (signed char)98;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 18281753413966174735ULL;
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
