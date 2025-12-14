#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5429779844438081480LL;
signed char var_1 = (signed char)90;
unsigned int var_4 = 3375303031U;
unsigned short var_17 = (unsigned short)52597;
int zero = 0;
unsigned long long int var_19 = 14782108233220545055ULL;
signed char var_20 = (signed char)-23;
void init() {
}

void checksum() {
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
