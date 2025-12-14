#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)105;
short var_1 = (short)-3584;
unsigned int var_4 = 2510535197U;
signed char var_6 = (signed char)-29;
long long int var_7 = 7579274570134906133LL;
unsigned int var_10 = 2314520678U;
int zero = 0;
short var_11 = (short)32238;
short var_12 = (short)-9193;
_Bool var_13 = (_Bool)1;
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
