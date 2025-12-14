#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4113842724768442039LL;
unsigned short var_3 = (unsigned short)59094;
unsigned char var_4 = (unsigned char)121;
unsigned int var_6 = 14300358U;
unsigned long long int var_14 = 13027282978924880154ULL;
int zero = 0;
short var_15 = (short)32165;
unsigned long long int var_16 = 5556217169428433211ULL;
unsigned char var_17 = (unsigned char)61;
long long int var_18 = 8117047583666018688LL;
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
