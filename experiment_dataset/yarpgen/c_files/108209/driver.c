#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4117391740U;
unsigned long long int var_8 = 6479299136460016146ULL;
long long int var_12 = -5153507431286800146LL;
unsigned char var_14 = (unsigned char)79;
int zero = 0;
long long int var_20 = 1999446231200834751LL;
long long int var_21 = 2532452439221312555LL;
unsigned short var_22 = (unsigned short)2164;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
