#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12145655887834122525ULL;
unsigned long long int var_10 = 13287826242131378111ULL;
long long int var_11 = -741063513235067198LL;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned char var_20 = (unsigned char)67;
signed char var_21 = (signed char)-80;
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
