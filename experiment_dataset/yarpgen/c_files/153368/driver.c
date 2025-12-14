#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7264475999916346136LL;
_Bool var_2 = (_Bool)1;
signed char var_5 = (signed char)62;
signed char var_7 = (signed char)44;
long long int var_8 = -9161458753440899319LL;
signed char var_9 = (signed char)25;
signed char var_10 = (signed char)102;
signed char var_12 = (signed char)-82;
int zero = 0;
unsigned char var_13 = (unsigned char)181;
long long int var_14 = -6645644944052479531LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
