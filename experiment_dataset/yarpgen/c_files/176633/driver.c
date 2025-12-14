#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16467;
unsigned short var_1 = (unsigned short)22133;
unsigned short var_2 = (unsigned short)64602;
long long int var_3 = -2411948837682863013LL;
unsigned int var_5 = 47190523U;
short var_6 = (short)-6846;
int zero = 0;
long long int var_10 = 8299448136388087847LL;
unsigned int var_11 = 1398332024U;
int var_12 = 1752709324;
unsigned short var_13 = (unsigned short)59434;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
