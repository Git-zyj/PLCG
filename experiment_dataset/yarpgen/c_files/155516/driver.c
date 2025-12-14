#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-102;
long long int var_12 = 646648118819602764LL;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 4176137096431665490ULL;
long long int var_21 = -7341887587914957343LL;
long long int var_22 = 7851979399995169991LL;
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
