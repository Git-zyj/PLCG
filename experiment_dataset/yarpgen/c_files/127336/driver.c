#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 1871776321124954564LL;
unsigned short var_8 = (unsigned short)54049;
long long int var_9 = 5076953584908599718LL;
long long int var_12 = -8099195137617498050LL;
unsigned char var_15 = (unsigned char)35;
int zero = 0;
unsigned char var_18 = (unsigned char)77;
int var_19 = 2124667649;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
