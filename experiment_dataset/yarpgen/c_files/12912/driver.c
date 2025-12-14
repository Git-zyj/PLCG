#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3252886345963402753ULL;
unsigned char var_3 = (unsigned char)79;
short var_7 = (short)-8348;
short var_17 = (short)-4057;
int zero = 0;
unsigned short var_19 = (unsigned short)17683;
long long int var_20 = -5088536635723539951LL;
unsigned char var_21 = (unsigned char)1;
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
