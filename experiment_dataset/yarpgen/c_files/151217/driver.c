#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)161;
_Bool var_5 = (_Bool)0;
long long int var_6 = -7703552856092629821LL;
unsigned long long int var_9 = 5015180359545850767ULL;
int zero = 0;
unsigned long long int var_14 = 812879378659850227ULL;
long long int var_15 = 5925886193219056144LL;
signed char var_16 = (signed char)93;
unsigned long long int var_17 = 3336877121053251849ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
