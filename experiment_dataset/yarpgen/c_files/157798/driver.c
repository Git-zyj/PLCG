#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7281578867117531001LL;
unsigned long long int var_5 = 11873917590149792329ULL;
long long int var_11 = -1097705973322521264LL;
int var_15 = -1334832820;
unsigned long long int var_17 = 8990744842110134263ULL;
int zero = 0;
signed char var_18 = (signed char)52;
unsigned long long int var_19 = 11857873134920836577ULL;
short var_20 = (short)28995;
int var_21 = -1456628805;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
