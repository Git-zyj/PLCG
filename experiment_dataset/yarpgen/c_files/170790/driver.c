#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)832;
long long int var_4 = 8366642143040690345LL;
long long int var_7 = -5661428589277407814LL;
signed char var_9 = (signed char)-73;
long long int var_15 = 4453039559387297806LL;
int zero = 0;
unsigned short var_20 = (unsigned short)56024;
long long int var_21 = -6894130908415820413LL;
void init() {
}

void checksum() {
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
