#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4346423653181297385LL;
_Bool var_4 = (_Bool)1;
unsigned int var_8 = 4285286134U;
unsigned int var_12 = 3205249855U;
_Bool var_16 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)-12;
unsigned char var_18 = (unsigned char)128;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 2525239811U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
