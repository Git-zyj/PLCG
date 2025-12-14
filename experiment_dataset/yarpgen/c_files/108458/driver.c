#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15673806431728196846ULL;
_Bool var_4 = (_Bool)0;
unsigned int var_7 = 1965209298U;
int zero = 0;
signed char var_12 = (signed char)109;
unsigned char var_13 = (unsigned char)26;
short var_14 = (short)-16282;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
