#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-226;
int var_7 = -26235068;
unsigned long long int var_11 = 7004154523561010267ULL;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned char var_16 = (unsigned char)110;
int var_17 = -19146273;
unsigned int var_18 = 3764555114U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
