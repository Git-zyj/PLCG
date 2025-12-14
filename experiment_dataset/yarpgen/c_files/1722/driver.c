#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 8105250309426762325LL;
unsigned short var_5 = (unsigned short)64243;
long long int var_9 = -9092306014455961943LL;
_Bool var_10 = (_Bool)1;
long long int var_11 = -4970579719229957704LL;
int zero = 0;
unsigned long long int var_16 = 4299728293422460512ULL;
unsigned long long int var_17 = 1512548433984184808ULL;
unsigned short var_18 = (unsigned short)54645;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
