#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2484505955740238671LL;
signed char var_4 = (signed char)-119;
unsigned char var_9 = (unsigned char)211;
int zero = 0;
unsigned long long int var_10 = 18160823293070068313ULL;
short var_11 = (short)-5797;
unsigned int var_12 = 462597265U;
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
