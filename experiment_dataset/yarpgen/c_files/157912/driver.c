#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 9920592985672742341ULL;
_Bool var_8 = (_Bool)1;
long long int var_9 = 3574066554173857850LL;
int zero = 0;
short var_14 = (short)13928;
unsigned char var_15 = (unsigned char)67;
unsigned char var_16 = (unsigned char)191;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
