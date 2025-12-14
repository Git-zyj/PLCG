#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1874827599;
unsigned long long int var_6 = 13514667811645518990ULL;
unsigned short var_7 = (unsigned short)36944;
_Bool var_9 = (_Bool)1;
long long int var_10 = 9028920207485973759LL;
int zero = 0;
signed char var_12 = (signed char)-125;
_Bool var_13 = (_Bool)0;
long long int var_14 = -5467892019591355518LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
