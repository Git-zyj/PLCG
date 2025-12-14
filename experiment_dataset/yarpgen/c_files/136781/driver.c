#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3136159972764230776LL;
unsigned char var_1 = (unsigned char)35;
short var_12 = (short)-25322;
unsigned short var_15 = (unsigned short)62467;
int zero = 0;
long long int var_16 = 1291612945474482115LL;
int var_17 = -1922892772;
signed char var_18 = (signed char)75;
int var_19 = -655289200;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
