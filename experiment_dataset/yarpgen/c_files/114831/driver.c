#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3587309763U;
unsigned long long int var_9 = 1518157550005673445ULL;
unsigned short var_13 = (unsigned short)49742;
int zero = 0;
unsigned int var_15 = 590537743U;
unsigned long long int var_16 = 9375237434667556008ULL;
signed char var_17 = (signed char)103;
long long int var_18 = 8657683492043947125LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
