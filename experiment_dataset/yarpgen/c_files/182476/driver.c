#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 111405604;
unsigned int var_7 = 4005146865U;
short var_9 = (short)-31217;
unsigned short var_10 = (unsigned short)50365;
unsigned long long int var_14 = 407394844181635150ULL;
unsigned long long int var_16 = 15599016276217634989ULL;
unsigned int var_17 = 9104016U;
int zero = 0;
unsigned int var_18 = 3691339525U;
signed char var_19 = (signed char)53;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
