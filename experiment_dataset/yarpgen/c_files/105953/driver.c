#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 698623511;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_15 = 2895848U;
short var_16 = (short)25973;
unsigned char var_17 = (unsigned char)188;
long long int var_18 = -8318743161137407840LL;
short var_19 = (short)-11156;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
