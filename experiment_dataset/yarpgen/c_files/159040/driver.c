#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-105;
long long int var_3 = -6753150747753180020LL;
int var_4 = -1313404279;
long long int var_8 = -4603179506572474591LL;
int var_10 = -1701688358;
int zero = 0;
int var_12 = 456031049;
unsigned long long int var_13 = 17260010673945470381ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
