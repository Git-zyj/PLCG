#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)45;
unsigned int var_2 = 3693855968U;
unsigned char var_3 = (unsigned char)62;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 6449740196176414975ULL;
unsigned int var_7 = 729280761U;
unsigned long long int var_9 = 2074153128442577144ULL;
unsigned int var_10 = 1091437646U;
unsigned short var_12 = (unsigned short)44437;
unsigned char var_13 = (unsigned char)214;
unsigned char var_16 = (unsigned char)143;
int zero = 0;
unsigned long long int var_17 = 8124670826079979884ULL;
unsigned int var_18 = 2002050068U;
unsigned long long int var_19 = 15082077137499101318ULL;
unsigned char var_20 = (unsigned char)14;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
