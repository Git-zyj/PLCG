#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)114;
long long int var_1 = -9156286039356816411LL;
unsigned long long int var_5 = 7058696690207457936ULL;
int zero = 0;
signed char var_19 = (signed char)19;
int var_20 = 1747198309;
long long int var_21 = 8185205714359684829LL;
unsigned short var_22 = (unsigned short)23980;
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
