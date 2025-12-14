#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31441;
int var_2 = 1707683663;
short var_9 = (short)-31918;
unsigned long long int var_11 = 15788009903851946469ULL;
int zero = 0;
int var_17 = 231420462;
short var_18 = (short)-28152;
unsigned short var_19 = (unsigned short)2023;
unsigned short var_20 = (unsigned short)5591;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
