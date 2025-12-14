#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4014256877224470300LL;
unsigned int var_3 = 200798600U;
unsigned int var_4 = 1203448418U;
unsigned short var_6 = (unsigned short)32466;
_Bool var_7 = (_Bool)1;
unsigned short var_9 = (unsigned short)52653;
short var_10 = (short)-26392;
int zero = 0;
unsigned int var_11 = 274850248U;
unsigned short var_12 = (unsigned short)31601;
short var_13 = (short)10876;
short var_14 = (short)6818;
unsigned int var_15 = 3401259555U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
