#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46329;
unsigned short var_3 = (unsigned short)31690;
long long int var_4 = 1514271130431954705LL;
long long int var_10 = 4260966518400012578LL;
int zero = 0;
signed char var_11 = (signed char)62;
long long int var_12 = 5664040880283931073LL;
long long int var_13 = -972974205617017374LL;
unsigned short var_14 = (unsigned short)2589;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
