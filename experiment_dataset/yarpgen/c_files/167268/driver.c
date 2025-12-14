#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6901740442387191550LL;
unsigned short var_5 = (unsigned short)9548;
signed char var_6 = (signed char)109;
int var_13 = 1593825559;
unsigned char var_14 = (unsigned char)211;
long long int var_16 = -8468817358068232760LL;
int var_17 = 148887167;
int zero = 0;
int var_18 = 536883867;
int var_19 = -503957839;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
