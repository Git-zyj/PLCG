#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5290098004627511926ULL;
short var_2 = (short)15364;
signed char var_3 = (signed char)92;
unsigned long long int var_6 = 7403973045893998481ULL;
unsigned int var_7 = 3555315959U;
int zero = 0;
signed char var_10 = (signed char)-106;
unsigned long long int var_11 = 12368274826273229734ULL;
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
