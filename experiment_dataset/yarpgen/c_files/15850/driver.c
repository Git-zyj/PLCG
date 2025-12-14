#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -696239960818399901LL;
long long int var_2 = 8194673730312576895LL;
int var_5 = -635670954;
unsigned char var_9 = (unsigned char)160;
int zero = 0;
unsigned int var_11 = 1503879491U;
unsigned short var_12 = (unsigned short)40099;
signed char var_13 = (signed char)92;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
