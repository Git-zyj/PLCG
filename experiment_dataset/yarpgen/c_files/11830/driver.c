#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -634692842183123527LL;
unsigned int var_2 = 2785115318U;
unsigned long long int var_8 = 8778224420963033685ULL;
unsigned long long int var_15 = 9402689800197634178ULL;
unsigned char var_17 = (unsigned char)233;
int zero = 0;
short var_19 = (short)-11188;
int var_20 = -1693133195;
int var_21 = 1067993516;
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
