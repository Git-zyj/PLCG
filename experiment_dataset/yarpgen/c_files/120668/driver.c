#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6785116916509340694ULL;
signed char var_2 = (signed char)33;
unsigned char var_3 = (unsigned char)118;
unsigned short var_9 = (unsigned short)57939;
signed char var_17 = (signed char)-52;
int zero = 0;
int var_19 = -871210830;
unsigned short var_20 = (unsigned short)64323;
signed char var_21 = (signed char)5;
void init() {
}

void checksum() {
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
