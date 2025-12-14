#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64496;
unsigned long long int var_9 = 3785555992490394892ULL;
int zero = 0;
unsigned long long int var_18 = 8271062545116275540ULL;
unsigned long long int var_19 = 5651437318366765336ULL;
unsigned short var_20 = (unsigned short)15358;
unsigned short var_21 = (unsigned short)38101;
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
