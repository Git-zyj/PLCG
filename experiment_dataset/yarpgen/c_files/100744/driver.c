#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2178525722U;
unsigned long long int var_1 = 10300057568377084956ULL;
unsigned long long int var_4 = 6418979130675793812ULL;
long long int var_6 = 759809810249265926LL;
long long int var_9 = 121792586269460078LL;
int zero = 0;
signed char var_10 = (signed char)-64;
long long int var_11 = -5953618085477199322LL;
signed char var_12 = (signed char)-45;
unsigned long long int var_13 = 7193608260693607501ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
