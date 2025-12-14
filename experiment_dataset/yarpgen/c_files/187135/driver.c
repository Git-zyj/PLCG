#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4097373592U;
long long int var_10 = 4517970730486491144LL;
unsigned int var_11 = 3346987728U;
unsigned short var_12 = (unsigned short)28051;
int zero = 0;
_Bool var_13 = (_Bool)0;
long long int var_14 = -7539947354334131391LL;
int var_15 = 1847083037;
long long int var_16 = 4946106526356112246LL;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
