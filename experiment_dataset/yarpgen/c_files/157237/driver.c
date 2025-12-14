#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -402151895;
short var_2 = (short)3840;
int var_5 = -1407341715;
int zero = 0;
unsigned short var_18 = (unsigned short)53129;
int var_19 = 645615905;
unsigned char var_20 = (unsigned char)139;
void init() {
}

void checksum() {
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
