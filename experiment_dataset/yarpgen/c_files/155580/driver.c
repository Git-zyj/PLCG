#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16902313204545536565ULL;
unsigned short var_7 = (unsigned short)6584;
long long int var_11 = 3781644964333668172LL;
int zero = 0;
unsigned char var_18 = (unsigned char)206;
unsigned short var_19 = (unsigned short)23610;
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
