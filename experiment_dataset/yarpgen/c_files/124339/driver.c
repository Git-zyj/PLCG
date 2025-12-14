#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 173224711;
unsigned char var_4 = (unsigned char)169;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned int var_10 = 1126295555U;
unsigned char var_11 = (unsigned char)155;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
