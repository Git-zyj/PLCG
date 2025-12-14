#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned long long int var_9 = 9232869458904874598ULL;
unsigned long long int var_12 = 9747025818197739710ULL;
long long int var_15 = 5901482725421995987LL;
int zero = 0;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-3117;
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
