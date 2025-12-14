#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-5164;
unsigned char var_6 = (unsigned char)159;
short var_8 = (short)25308;
long long int var_9 = 3427832156745832567LL;
int zero = 0;
long long int var_11 = 4627326909866420452LL;
long long int var_12 = -7032894657533349528LL;
unsigned int var_13 = 1280656503U;
void init() {
}

void checksum() {
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
