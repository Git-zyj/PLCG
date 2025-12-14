#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15252528146113381852ULL;
signed char var_9 = (signed char)66;
signed char var_10 = (signed char)-41;
int zero = 0;
signed char var_19 = (signed char)71;
int var_20 = -1966946913;
unsigned int var_21 = 2482296386U;
unsigned int var_22 = 1807435633U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
