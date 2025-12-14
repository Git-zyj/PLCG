#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)103;
signed char var_8 = (signed char)-121;
signed char var_12 = (signed char)-80;
int zero = 0;
long long int var_15 = 7786993909833153860LL;
unsigned short var_16 = (unsigned short)53756;
unsigned int var_17 = 3403282571U;
unsigned short var_18 = (unsigned short)59413;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
