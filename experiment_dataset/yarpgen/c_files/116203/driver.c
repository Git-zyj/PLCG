#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4955653489384758185LL;
_Bool var_4 = (_Bool)1;
short var_5 = (short)25973;
int zero = 0;
long long int var_15 = -2385444140244658544LL;
unsigned short var_16 = (unsigned short)3178;
unsigned long long int var_17 = 4236307251703319031ULL;
unsigned long long int var_18 = 17197583578280208010ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
