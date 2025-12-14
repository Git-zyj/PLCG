#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)50451;
short var_8 = (short)28279;
long long int var_11 = 5325950269586645577LL;
int zero = 0;
unsigned short var_17 = (unsigned short)42923;
long long int var_18 = -3508279278958807158LL;
unsigned long long int var_19 = 11440543211680836045ULL;
unsigned long long int var_20 = 9977037198960016227ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
