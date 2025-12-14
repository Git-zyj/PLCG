#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1569807339U;
signed char var_2 = (signed char)-6;
unsigned int var_4 = 1351864016U;
unsigned int var_6 = 4233512968U;
signed char var_8 = (signed char)-11;
unsigned short var_9 = (unsigned short)47540;
long long int var_10 = 4560074285498977079LL;
unsigned int var_11 = 20384632U;
unsigned int var_13 = 3056511192U;
int zero = 0;
unsigned int var_14 = 2501994826U;
unsigned short var_15 = (unsigned short)47096;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
