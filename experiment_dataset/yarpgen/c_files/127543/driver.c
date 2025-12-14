#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1711859955333030620LL;
long long int var_1 = -5817849628941118712LL;
unsigned int var_3 = 645981836U;
long long int var_6 = -1418777512528483309LL;
long long int var_9 = -8260679068650635328LL;
unsigned char var_10 = (unsigned char)34;
int zero = 0;
unsigned long long int var_12 = 8196676639436512764ULL;
short var_13 = (short)14991;
void init() {
}

void checksum() {
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
