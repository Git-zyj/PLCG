#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -5461272934126798196LL;
unsigned short var_12 = (unsigned short)751;
short var_15 = (short)-3792;
int zero = 0;
unsigned char var_19 = (unsigned char)191;
long long int var_20 = 5098388450618439516LL;
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
