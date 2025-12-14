#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)113;
signed char var_1 = (signed char)90;
unsigned long long int var_2 = 14202962856454852692ULL;
signed char var_3 = (signed char)35;
long long int var_4 = -1077844648180530330LL;
unsigned long long int var_6 = 8181343122891675397ULL;
unsigned char var_7 = (unsigned char)108;
unsigned char var_8 = (unsigned char)251;
int zero = 0;
unsigned char var_10 = (unsigned char)107;
long long int var_11 = 4295420313066298568LL;
long long int var_12 = 1862742102642110031LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
