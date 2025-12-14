#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57739;
unsigned int var_3 = 356513847U;
unsigned long long int var_7 = 10239629605091718998ULL;
signed char var_8 = (signed char)-95;
unsigned int var_9 = 2986900985U;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = 4549777219747577868LL;
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
