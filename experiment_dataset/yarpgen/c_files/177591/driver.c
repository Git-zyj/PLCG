#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 1112973157301116831LL;
int zero = 0;
signed char var_16 = (signed char)-101;
unsigned long long int var_17 = 7078518487727860313ULL;
unsigned long long int var_18 = 14128805984855476899ULL;
signed char var_19 = (signed char)45;
int var_20 = -58339405;
long long int var_21 = 4753007906861927676LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
