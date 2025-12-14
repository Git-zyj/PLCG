#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20361;
unsigned int var_1 = 1470143261U;
signed char var_2 = (signed char)91;
int zero = 0;
int var_11 = 67885781;
long long int var_12 = -6258672532540720209LL;
long long int var_13 = 8479953645351830183LL;
unsigned long long int var_14 = 7978303719103353656ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
