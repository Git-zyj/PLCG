#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_9 = (signed char)32;
_Bool var_11 = (_Bool)1;
long long int var_13 = 5829361725430010934LL;
long long int var_17 = 8803046697443607959LL;
int zero = 0;
unsigned long long int var_20 = 10714932454828997070ULL;
unsigned char var_21 = (unsigned char)220;
unsigned int var_22 = 343415813U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
