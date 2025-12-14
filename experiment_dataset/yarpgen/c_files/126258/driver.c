#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-35;
unsigned short var_4 = (unsigned short)5297;
unsigned long long int var_6 = 16071177398534807711ULL;
long long int var_7 = 2808808652006717679LL;
long long int var_11 = 2994204171533482781LL;
unsigned int var_17 = 3576471256U;
int zero = 0;
int var_18 = -1644286219;
short var_19 = (short)1419;
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
