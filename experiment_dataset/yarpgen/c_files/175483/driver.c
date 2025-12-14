#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18779;
unsigned long long int var_2 = 45259807103507798ULL;
long long int var_5 = 7021671503886223514LL;
unsigned short var_8 = (unsigned short)8089;
int var_9 = -126992258;
int zero = 0;
unsigned int var_10 = 2623048053U;
long long int var_11 = -9093045676874731299LL;
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
