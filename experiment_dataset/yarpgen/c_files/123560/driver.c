#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14140683707502554746ULL;
long long int var_2 = -5439304643250129941LL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_7 = 2964144060116854461ULL;
unsigned short var_13 = (unsigned short)54843;
int zero = 0;
unsigned short var_18 = (unsigned short)44096;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 12833575083648136173ULL;
void init() {
}

void checksum() {
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
