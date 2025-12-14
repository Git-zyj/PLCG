#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 17471629194455379085ULL;
short var_11 = (short)-25219;
long long int var_12 = -655899930368335971LL;
int zero = 0;
unsigned int var_14 = 3911976578U;
unsigned short var_15 = (unsigned short)15765;
signed char var_16 = (signed char)-47;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
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
