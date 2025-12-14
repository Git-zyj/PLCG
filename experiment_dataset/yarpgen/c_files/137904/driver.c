#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)37652;
_Bool var_2 = (_Bool)1;
unsigned long long int var_6 = 18081828471790726379ULL;
unsigned long long int var_8 = 8449546395732410840ULL;
int zero = 0;
unsigned int var_11 = 1977739046U;
short var_12 = (short)-32468;
unsigned long long int var_13 = 11177768817963382766ULL;
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
