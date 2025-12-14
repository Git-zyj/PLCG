#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 375004620145120309LL;
long long int var_4 = -6854311050028114607LL;
short var_6 = (short)21869;
unsigned int var_7 = 4140131586U;
int var_9 = -108211399;
short var_12 = (short)19416;
int zero = 0;
unsigned int var_17 = 711744521U;
short var_18 = (short)-11630;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
