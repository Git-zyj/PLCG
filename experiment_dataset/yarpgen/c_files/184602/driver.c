#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1136245992;
int var_2 = 1162479115;
unsigned char var_3 = (unsigned char)220;
unsigned short var_6 = (unsigned short)15870;
unsigned char var_10 = (unsigned char)86;
int var_12 = -141122708;
unsigned short var_14 = (unsigned short)12970;
int zero = 0;
unsigned long long int var_19 = 3123620850232315218ULL;
signed char var_20 = (signed char)-4;
unsigned long long int var_21 = 18220320691349504512ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
