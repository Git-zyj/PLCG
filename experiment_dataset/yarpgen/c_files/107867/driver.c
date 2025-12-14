#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-27;
signed char var_2 = (signed char)-23;
int var_6 = -1754882520;
unsigned int var_9 = 2195523890U;
int zero = 0;
unsigned long long int var_11 = 12050645066301591996ULL;
unsigned short var_12 = (unsigned short)16229;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
