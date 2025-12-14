#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4557736165321728099LL;
short var_2 = (short)21429;
unsigned char var_4 = (unsigned char)159;
int var_5 = 1748342008;
unsigned long long int var_8 = 10982479358355636319ULL;
unsigned short var_9 = (unsigned short)37433;
unsigned long long int var_10 = 10312566774691398991ULL;
unsigned short var_11 = (unsigned short)36481;
int zero = 0;
int var_13 = 1067847559;
long long int var_14 = -606907981122457649LL;
unsigned char var_15 = (unsigned char)21;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
