#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)4408;
long long int var_10 = 3699170940264118709LL;
long long int var_15 = -4091470351374192470LL;
signed char var_17 = (signed char)28;
int zero = 0;
short var_18 = (short)17511;
short var_19 = (short)-4453;
signed char var_20 = (signed char)-83;
unsigned long long int var_21 = 4555515425480368383ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
