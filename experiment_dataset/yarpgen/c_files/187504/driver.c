#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1222921308;
unsigned short var_3 = (unsigned short)17858;
unsigned short var_4 = (unsigned short)33895;
long long int var_6 = -1238695176926460051LL;
long long int var_7 = 458326345366355178LL;
int var_14 = 548640356;
int zero = 0;
long long int var_19 = 3467276709273534284LL;
unsigned short var_20 = (unsigned short)28414;
unsigned long long int var_21 = 6888126506798798469ULL;
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
