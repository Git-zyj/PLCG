#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -2504358069985496902LL;
unsigned short var_9 = (unsigned short)35547;
_Bool var_13 = (_Bool)1;
int var_16 = 104754859;
long long int var_17 = 8377591189099326737LL;
int zero = 0;
short var_20 = (short)32497;
unsigned long long int var_21 = 15726350836672720968ULL;
unsigned char var_22 = (unsigned char)29;
int var_23 = -1224484348;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
