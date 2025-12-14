#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 11026061516795594432ULL;
unsigned char var_4 = (unsigned char)213;
unsigned int var_6 = 3034383782U;
unsigned int var_9 = 3610505410U;
unsigned long long int var_12 = 904738935098885691ULL;
unsigned char var_14 = (unsigned char)83;
unsigned long long int var_18 = 17363404813498482356ULL;
int zero = 0;
unsigned long long int var_20 = 9740612855267058295ULL;
unsigned long long int var_21 = 6345708688957635798ULL;
unsigned long long int var_22 = 2914926566346528801ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
