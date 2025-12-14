#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -29208553;
long long int var_8 = 4784923211417578992LL;
_Bool var_11 = (_Bool)1;
short var_13 = (short)-3348;
unsigned short var_14 = (unsigned short)9302;
int zero = 0;
unsigned int var_15 = 975651300U;
unsigned int var_16 = 1686481303U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
