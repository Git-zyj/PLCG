#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62864;
unsigned long long int var_2 = 3701509341246020237ULL;
int var_5 = -738515520;
int var_6 = -213205797;
unsigned long long int var_16 = 16793314072042650773ULL;
int zero = 0;
unsigned long long int var_18 = 14021488458989132471ULL;
short var_19 = (short)-8881;
long long int var_20 = -335772261352255644LL;
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
