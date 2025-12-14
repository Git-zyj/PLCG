#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)1608;
signed char var_9 = (signed char)-100;
unsigned long long int var_11 = 6699338336793821032ULL;
int zero = 0;
signed char var_19 = (signed char)-126;
signed char var_20 = (signed char)-46;
void init() {
}

void checksum() {
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
