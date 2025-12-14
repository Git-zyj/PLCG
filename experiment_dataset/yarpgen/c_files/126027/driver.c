#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)14567;
unsigned long long int var_5 = 13954227112350690797ULL;
_Bool var_12 = (_Bool)1;
unsigned char var_15 = (unsigned char)116;
int zero = 0;
unsigned long long int var_17 = 10475789497620075555ULL;
long long int var_18 = -5161824168400646789LL;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-80;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
