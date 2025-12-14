#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)62290;
unsigned long long int var_3 = 16957070663504840545ULL;
long long int var_5 = 3780255362506154019LL;
int zero = 0;
unsigned char var_10 = (unsigned char)97;
unsigned long long int var_11 = 16736326250090663765ULL;
unsigned int var_12 = 342455404U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
