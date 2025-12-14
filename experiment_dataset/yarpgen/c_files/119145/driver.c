#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -1733617048692560801LL;
signed char var_5 = (signed char)-1;
_Bool var_6 = (_Bool)0;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned short var_10 = (unsigned short)18497;
long long int var_11 = 3573394417939848783LL;
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
