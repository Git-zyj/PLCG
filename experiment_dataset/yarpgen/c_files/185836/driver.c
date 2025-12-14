#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1021224323U;
int var_6 = -1117511197;
_Bool var_9 = (_Bool)0;
unsigned long long int var_12 = 17219888944591080371ULL;
short var_16 = (short)10582;
int zero = 0;
unsigned long long int var_20 = 1835159477759272314ULL;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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
