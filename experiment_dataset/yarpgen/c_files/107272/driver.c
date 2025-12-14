#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)44649;
unsigned long long int var_3 = 14619559225834210793ULL;
signed char var_5 = (signed char)-64;
short var_6 = (short)-9956;
long long int var_7 = 7517978570118228881LL;
int zero = 0;
long long int var_10 = -1637944028722958063LL;
long long int var_11 = 4419214645365381709LL;
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
