#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5840669085032694612ULL;
int var_3 = 1172126468;
unsigned long long int var_4 = 12863042043473525121ULL;
int var_8 = 1645657717;
unsigned long long int var_9 = 6038798186461844471ULL;
int var_15 = -94299102;
int zero = 0;
signed char var_19 = (signed char)-12;
signed char var_20 = (signed char)-45;
void init() {
}

void checksum() {
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
