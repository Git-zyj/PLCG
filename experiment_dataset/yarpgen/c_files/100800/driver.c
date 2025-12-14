#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-102;
unsigned long long int var_2 = 2244691190416590506ULL;
int var_3 = 1292737974;
_Bool var_5 = (_Bool)1;
_Bool var_10 = (_Bool)0;
int zero = 0;
int var_11 = 1475442798;
short var_12 = (short)17356;
unsigned int var_13 = 2889772757U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
