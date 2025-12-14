#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-19;
_Bool var_3 = (_Bool)0;
long long int var_9 = 7839590775826911717LL;
int zero = 0;
unsigned short var_19 = (unsigned short)53203;
unsigned int var_20 = 1126634128U;
int var_21 = -1994399475;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
