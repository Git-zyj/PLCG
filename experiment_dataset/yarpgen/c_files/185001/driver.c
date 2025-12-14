#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13848142798044674932ULL;
_Bool var_2 = (_Bool)1;
unsigned char var_5 = (unsigned char)98;
short var_6 = (short)-21593;
_Bool var_9 = (_Bool)0;
unsigned char var_12 = (unsigned char)33;
signed char var_17 = (signed char)17;
int zero = 0;
short var_18 = (short)-687;
int var_19 = -986202458;
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
