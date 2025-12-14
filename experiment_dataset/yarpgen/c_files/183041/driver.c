#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)65;
unsigned long long int var_4 = 15482137609815680893ULL;
unsigned long long int var_11 = 9036490262739078422ULL;
unsigned long long int var_13 = 17476060891714086014ULL;
int zero = 0;
long long int var_16 = -747266875449049030LL;
unsigned long long int var_17 = 15001922205534014103ULL;
long long int var_18 = -2178994971201136801LL;
unsigned int var_19 = 1093408899U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
