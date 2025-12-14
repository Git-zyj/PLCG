#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 461155140U;
long long int var_5 = -7284704799258204580LL;
int var_6 = -448596256;
unsigned long long int var_9 = 8793709774529361098ULL;
int zero = 0;
signed char var_10 = (signed char)-74;
unsigned short var_11 = (unsigned short)23863;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
