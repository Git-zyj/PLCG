#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7700930579394990471LL;
short var_9 = (short)21895;
unsigned char var_11 = (unsigned char)235;
signed char var_13 = (signed char)-59;
int zero = 0;
signed char var_15 = (signed char)-8;
short var_16 = (short)-27335;
unsigned int var_17 = 2423629447U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
