#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64563;
unsigned long long int var_3 = 3110903875671728020ULL;
long long int var_9 = 3564735216293773892LL;
signed char var_10 = (signed char)118;
int zero = 0;
int var_15 = -909173816;
unsigned int var_16 = 419378670U;
unsigned long long int var_17 = 101758912676012160ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
