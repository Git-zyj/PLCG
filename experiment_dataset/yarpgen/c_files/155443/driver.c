#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -655551379054107938LL;
unsigned char var_7 = (unsigned char)208;
_Bool var_9 = (_Bool)1;
unsigned char var_15 = (unsigned char)250;
int zero = 0;
unsigned short var_17 = (unsigned short)61113;
long long int var_18 = 5891149916124952915LL;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
