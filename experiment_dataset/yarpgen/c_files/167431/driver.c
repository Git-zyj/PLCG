#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18410099420027532351ULL;
_Bool var_2 = (_Bool)0;
int var_6 = 210261874;
unsigned long long int var_7 = 13679430398851647766ULL;
long long int var_11 = 5888548150951527726LL;
unsigned int var_13 = 2541564978U;
short var_14 = (short)-19777;
int zero = 0;
signed char var_15 = (signed char)43;
unsigned char var_16 = (unsigned char)23;
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
