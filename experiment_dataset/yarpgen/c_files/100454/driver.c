#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -567970415715443890LL;
unsigned short var_6 = (unsigned short)56550;
unsigned long long int var_7 = 7710795624268674977ULL;
int var_10 = -1651161732;
int var_11 = -2442188;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 1149868298U;
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
