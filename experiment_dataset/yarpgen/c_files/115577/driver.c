#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -1613935631515119091LL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_9 = 10690981916765311981ULL;
unsigned long long int var_11 = 15755866381016475172ULL;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned short var_16 = (unsigned short)4250;
unsigned long long int var_17 = 11310661977146223803ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
