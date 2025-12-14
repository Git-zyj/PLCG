#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 17198031458831209446ULL;
signed char var_5 = (signed char)60;
int var_6 = -8651557;
int var_8 = 1445196406;
unsigned char var_9 = (unsigned char)224;
unsigned long long int var_10 = 4048278478575371134ULL;
unsigned long long int var_12 = 2642115676387668515ULL;
int zero = 0;
long long int var_13 = -1537065505059236179LL;
unsigned long long int var_14 = 12367786915342184069ULL;
int var_15 = -1573973178;
signed char var_16 = (signed char)-100;
signed char var_17 = (signed char)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
