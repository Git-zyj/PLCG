#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-17353;
signed char var_2 = (signed char)127;
unsigned short var_3 = (unsigned short)54596;
unsigned int var_6 = 2656409336U;
long long int var_9 = -5769476036820979367LL;
long long int var_10 = -4287722586609725934LL;
int zero = 0;
signed char var_14 = (signed char)-89;
signed char var_15 = (signed char)41;
unsigned int var_16 = 3754205005U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
