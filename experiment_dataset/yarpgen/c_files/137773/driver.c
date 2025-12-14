#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -167487172;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)30;
unsigned char var_4 = (unsigned char)164;
unsigned long long int var_9 = 8573678345548460710ULL;
short var_10 = (short)-25027;
int zero = 0;
unsigned long long int var_11 = 15539302047560864798ULL;
signed char var_12 = (signed char)-53;
unsigned long long int var_13 = 14898459446836172342ULL;
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
