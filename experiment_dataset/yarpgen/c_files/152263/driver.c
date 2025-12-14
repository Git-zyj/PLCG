#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-18;
long long int var_3 = 5824970970685920114LL;
long long int var_4 = 1797113680064029973LL;
unsigned short var_9 = (unsigned short)14030;
long long int var_10 = 2366035126660510455LL;
int zero = 0;
signed char var_11 = (signed char)103;
unsigned short var_12 = (unsigned short)11217;
unsigned short var_13 = (unsigned short)50080;
void init() {
}

void checksum() {
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
