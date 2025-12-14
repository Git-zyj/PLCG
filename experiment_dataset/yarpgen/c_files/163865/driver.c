#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3198639825022903465ULL;
unsigned long long int var_3 = 13313091460468859091ULL;
long long int var_7 = -316849976601560679LL;
signed char var_8 = (signed char)29;
unsigned long long int var_9 = 11192816657383905441ULL;
long long int var_13 = -6009721176370424267LL;
int zero = 0;
signed char var_18 = (signed char)-94;
int var_19 = 1704993812;
unsigned char var_20 = (unsigned char)171;
void init() {
}

void checksum() {
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
