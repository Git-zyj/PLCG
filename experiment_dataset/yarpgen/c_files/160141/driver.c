#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)174;
unsigned int var_3 = 2049809069U;
unsigned long long int var_4 = 1257366462936619785ULL;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)45467;
long long int var_12 = 4921491610993626425LL;
int zero = 0;
unsigned int var_13 = 2811770044U;
unsigned char var_14 = (unsigned char)212;
unsigned short var_15 = (unsigned short)19347;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
