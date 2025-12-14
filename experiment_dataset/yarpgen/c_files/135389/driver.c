#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)5;
unsigned long long int var_3 = 15370192445138261447ULL;
_Bool var_4 = (_Bool)0;
int var_7 = 2009628039;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 4233577824213449506ULL;
void init() {
}

void checksum() {
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
