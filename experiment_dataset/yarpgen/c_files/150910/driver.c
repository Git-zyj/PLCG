#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-59;
signed char var_2 = (signed char)83;
unsigned long long int var_4 = 14168887645264159752ULL;
unsigned long long int var_5 = 2965812583173195361ULL;
unsigned char var_9 = (unsigned char)211;
int zero = 0;
unsigned long long int var_11 = 4735362748644882536ULL;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
