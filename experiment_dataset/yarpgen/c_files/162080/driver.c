#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -1993813163;
unsigned short var_8 = (unsigned short)60264;
long long int var_9 = 1997197189947485718LL;
int zero = 0;
int var_10 = 2141993038;
unsigned long long int var_11 = 17399388201635979266ULL;
long long int var_12 = -2980880568411892459LL;
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
