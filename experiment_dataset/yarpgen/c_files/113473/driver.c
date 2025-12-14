#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1447512126U;
signed char var_5 = (signed char)-51;
unsigned short var_7 = (unsigned short)11075;
unsigned short var_8 = (unsigned short)34294;
int zero = 0;
long long int var_15 = 6785579528891616639LL;
unsigned short var_16 = (unsigned short)37270;
unsigned long long int var_17 = 520249930663274461ULL;
unsigned char var_18 = (unsigned char)22;
signed char var_19 = (signed char)127;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
