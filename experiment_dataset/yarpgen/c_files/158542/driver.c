#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)32522;
unsigned long long int var_6 = 3093329303413165389ULL;
long long int var_12 = 175589596189796092LL;
short var_19 = (short)31426;
int zero = 0;
unsigned long long int var_20 = 14603992598799476781ULL;
unsigned char var_21 = (unsigned char)79;
int var_22 = 1738595612;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
