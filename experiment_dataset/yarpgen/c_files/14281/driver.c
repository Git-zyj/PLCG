#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3823957958668331027ULL;
long long int var_6 = 329574815221397043LL;
int var_7 = 265606972;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 6321052315219052414ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)65312;
short var_14 = (short)-13097;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
