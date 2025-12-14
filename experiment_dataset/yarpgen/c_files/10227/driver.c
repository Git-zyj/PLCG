#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-25870;
unsigned short var_5 = (unsigned short)8036;
unsigned long long int var_7 = 11296043364486801506ULL;
unsigned int var_9 = 2195171028U;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 3781592227U;
short var_15 = (short)32115;
void init() {
}

void checksum() {
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
