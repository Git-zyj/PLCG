#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17412784506303738236ULL;
unsigned long long int var_3 = 16515150990957521227ULL;
unsigned char var_4 = (unsigned char)234;
unsigned char var_8 = (unsigned char)189;
unsigned short var_11 = (unsigned short)35813;
unsigned short var_15 = (unsigned short)209;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)208;
void init() {
}

void checksum() {
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
