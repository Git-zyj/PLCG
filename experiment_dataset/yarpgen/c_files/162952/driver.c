#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1712226899U;
unsigned long long int var_5 = 13377299985357586681ULL;
unsigned long long int var_6 = 10334071498803035956ULL;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)35897;
unsigned int var_13 = 2011720152U;
unsigned int var_14 = 1339679298U;
int zero = 0;
unsigned int var_16 = 3341057646U;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
