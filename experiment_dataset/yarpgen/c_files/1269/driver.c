#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2535027967U;
signed char var_4 = (signed char)-75;
long long int var_7 = -5955949219848602893LL;
signed char var_10 = (signed char)-1;
unsigned long long int var_13 = 10930323142782287738ULL;
signed char var_15 = (signed char)37;
long long int var_17 = -1342465714060828667LL;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 2775155761U;
signed char var_20 = (signed char)-54;
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
