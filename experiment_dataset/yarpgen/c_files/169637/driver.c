#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1067769490017320091LL;
_Bool var_2 = (_Bool)0;
_Bool var_4 = (_Bool)0;
unsigned short var_10 = (unsigned short)45291;
int zero = 0;
unsigned short var_11 = (unsigned short)56219;
unsigned short var_12 = (unsigned short)57186;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
