#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17325007499039026198ULL;
unsigned long long int var_1 = 2944965546736472090ULL;
_Bool var_2 = (_Bool)0;
int var_4 = 1032024197;
unsigned char var_6 = (unsigned char)239;
unsigned long long int var_9 = 17541645628048562106ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)70;
unsigned long long int var_13 = 16386248361204900367ULL;
unsigned char var_14 = (unsigned char)244;
short var_15 = (short)-27490;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
