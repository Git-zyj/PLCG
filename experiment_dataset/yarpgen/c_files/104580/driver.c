#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)223;
unsigned int var_2 = 1823924471U;
int var_4 = -83047931;
unsigned long long int var_5 = 16984593030268587846ULL;
_Bool var_9 = (_Bool)0;
short var_10 = (short)-31370;
short var_11 = (short)-18096;
int zero = 0;
signed char var_12 = (signed char)-46;
int var_13 = 1585592181;
short var_14 = (short)-19007;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
