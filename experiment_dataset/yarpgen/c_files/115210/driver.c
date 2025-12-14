#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6713;
unsigned short var_2 = (unsigned short)54160;
signed char var_4 = (signed char)-115;
int var_5 = -1588419591;
unsigned char var_7 = (unsigned char)7;
short var_8 = (short)-24730;
unsigned long long int var_9 = 4587990551702527032ULL;
int zero = 0;
unsigned long long int var_11 = 2501394208457862570ULL;
unsigned long long int var_12 = 15370270976096281050ULL;
unsigned int var_13 = 3567878308U;
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
