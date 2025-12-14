#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -986388529654021931LL;
signed char var_3 = (signed char)14;
unsigned short var_10 = (unsigned short)61066;
short var_14 = (short)-27904;
int zero = 0;
short var_18 = (short)-3798;
long long int var_19 = 7044890551734940200LL;
long long int var_20 = 1348238692231564317LL;
long long int var_21 = -4237603605915856098LL;
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
