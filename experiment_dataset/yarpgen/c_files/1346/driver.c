#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2808298421U;
unsigned short var_2 = (unsigned short)17424;
long long int var_3 = -4108092913295626209LL;
unsigned int var_4 = 2820052426U;
int var_9 = -1095853553;
int zero = 0;
signed char var_10 = (signed char)-98;
unsigned int var_11 = 1660060266U;
unsigned short var_12 = (unsigned short)22026;
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
