#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1263038955;
_Bool var_10 = (_Bool)0;
unsigned char var_12 = (unsigned char)73;
long long int var_13 = -918216647042158785LL;
int zero = 0;
signed char var_14 = (signed char)-126;
unsigned int var_15 = 1023642550U;
unsigned int var_16 = 1996797267U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
