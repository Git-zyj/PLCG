#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -419941816954258379LL;
unsigned long long int var_4 = 13599895921196092963ULL;
long long int var_8 = 1846974332418779364LL;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)209;
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
