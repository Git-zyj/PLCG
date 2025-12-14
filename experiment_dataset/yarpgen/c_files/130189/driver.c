#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4622598969772298352LL;
_Bool var_7 = (_Bool)0;
signed char var_10 = (signed char)50;
long long int var_11 = -2632366793880211577LL;
int zero = 0;
int var_17 = 189539212;
unsigned char var_18 = (unsigned char)206;
long long int var_19 = 5473043620303962904LL;
void init() {
}

void checksum() {
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
