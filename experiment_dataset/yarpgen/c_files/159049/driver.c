#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4194669826948337025ULL;
_Bool var_8 = (_Bool)1;
long long int var_15 = 8602449343368924689LL;
int zero = 0;
short var_19 = (short)-23331;
unsigned char var_20 = (unsigned char)230;
unsigned int var_21 = 3413050708U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
