#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8370270963119850656LL;
unsigned long long int var_8 = 6426558456051310735ULL;
signed char var_9 = (signed char)75;
unsigned short var_18 = (unsigned short)44807;
int zero = 0;
signed char var_20 = (signed char)111;
unsigned char var_21 = (unsigned char)217;
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
