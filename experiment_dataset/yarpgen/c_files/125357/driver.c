#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)19938;
_Bool var_4 = (_Bool)1;
unsigned char var_10 = (unsigned char)123;
unsigned long long int var_15 = 14659131011888546204ULL;
int zero = 0;
short var_20 = (short)32729;
unsigned short var_21 = (unsigned short)60532;
short var_22 = (short)9539;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
