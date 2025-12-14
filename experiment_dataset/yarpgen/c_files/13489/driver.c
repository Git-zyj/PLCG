#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8558327571813110716LL;
unsigned char var_4 = (unsigned char)252;
int var_5 = -1959401518;
long long int var_8 = -847348315015823947LL;
short var_10 = (short)20182;
int zero = 0;
int var_19 = 1264244803;
unsigned int var_20 = 2391556696U;
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
