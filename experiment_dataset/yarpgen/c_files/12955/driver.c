#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 834065026U;
unsigned long long int var_4 = 1357130713503310555ULL;
signed char var_9 = (signed char)-122;
long long int var_11 = 676942430219990582LL;
unsigned char var_17 = (unsigned char)129;
int zero = 0;
unsigned long long int var_18 = 8541772408365473158ULL;
unsigned long long int var_19 = 1968068241568554950ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
