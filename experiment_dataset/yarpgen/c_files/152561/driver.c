#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_4 = 4449205407312154708LL;
int var_8 = 217780578;
signed char var_10 = (signed char)-56;
unsigned short var_11 = (unsigned short)30192;
int zero = 0;
unsigned short var_17 = (unsigned short)50614;
unsigned char var_18 = (unsigned char)170;
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
