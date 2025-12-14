#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)47385;
long long int var_3 = -6277398831499128468LL;
long long int var_6 = 5250762487595932194LL;
long long int var_7 = 5776608148487269290LL;
unsigned long long int var_9 = 14778701362191343403ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)32671;
long long int var_13 = -6758712816573102135LL;
unsigned int var_14 = 2457618955U;
unsigned int var_15 = 3619156936U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
