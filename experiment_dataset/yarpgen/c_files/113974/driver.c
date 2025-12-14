#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)222;
unsigned short var_3 = (unsigned short)24739;
long long int var_4 = -6180509307537127234LL;
_Bool var_5 = (_Bool)1;
unsigned int var_8 = 81988135U;
int var_14 = -893590897;
int zero = 0;
long long int var_20 = -2114615315038415787LL;
signed char var_21 = (signed char)-25;
void init() {
}

void checksum() {
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
