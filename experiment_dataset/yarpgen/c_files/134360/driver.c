#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)40470;
int var_7 = 571128504;
int var_10 = 1477298883;
unsigned int var_12 = 3788591805U;
int zero = 0;
signed char var_17 = (signed char)73;
unsigned char var_18 = (unsigned char)220;
unsigned short var_19 = (unsigned short)55223;
signed char var_20 = (signed char)-46;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
