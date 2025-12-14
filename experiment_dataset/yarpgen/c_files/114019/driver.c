#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)160;
unsigned short var_2 = (unsigned short)29738;
unsigned char var_3 = (unsigned char)251;
long long int var_4 = -2263059934110746286LL;
int var_8 = 303096247;
unsigned short var_9 = (unsigned short)29439;
int zero = 0;
unsigned long long int var_10 = 13825940354672380564ULL;
long long int var_11 = 6581886414131935531LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
