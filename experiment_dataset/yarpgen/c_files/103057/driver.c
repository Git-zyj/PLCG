#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14331705448017330758ULL;
unsigned short var_1 = (unsigned short)60251;
unsigned short var_2 = (unsigned short)4358;
unsigned short var_4 = (unsigned short)52956;
unsigned long long int var_6 = 1363458802438282390ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)13242;
unsigned long long int var_14 = 15923000199042726044ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
