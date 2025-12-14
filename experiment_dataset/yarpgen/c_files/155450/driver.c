#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 5387750222089600013ULL;
signed char var_5 = (signed char)-34;
int var_6 = -1613182258;
long long int var_8 = -9086977570974188183LL;
int zero = 0;
long long int var_10 = 2963943749116140798LL;
unsigned int var_11 = 3847658714U;
unsigned long long int var_12 = 9212913083374318670ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
