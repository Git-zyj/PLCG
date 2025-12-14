#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 10759406689390918239ULL;
unsigned short var_5 = (unsigned short)18428;
long long int var_9 = 4541468894225699993LL;
long long int var_12 = 3862030109653807092LL;
signed char var_15 = (signed char)-38;
int zero = 0;
unsigned short var_20 = (unsigned short)62195;
signed char var_21 = (signed char)7;
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
