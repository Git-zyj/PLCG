#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12243708635911246878ULL;
int var_1 = -1178699829;
long long int var_4 = 1113928822806499474LL;
unsigned long long int var_5 = 1019659844057847155ULL;
int var_6 = -1288230342;
long long int var_15 = -2377407359703823419LL;
int zero = 0;
unsigned char var_18 = (unsigned char)251;
unsigned char var_19 = (unsigned char)252;
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
