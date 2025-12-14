#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4243513374U;
unsigned short var_2 = (unsigned short)54792;
unsigned short var_9 = (unsigned short)1710;
unsigned long long int var_11 = 11707138181834625224ULL;
signed char var_12 = (signed char)-102;
int zero = 0;
int var_18 = 363945320;
long long int var_19 = 9020552049883359812LL;
void init() {
}

void checksum() {
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
