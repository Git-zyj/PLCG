#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15607265888362840902ULL;
long long int var_1 = 6166752938507983484LL;
_Bool var_4 = (_Bool)0;
short var_9 = (short)-26476;
int zero = 0;
short var_10 = (short)-28996;
unsigned int var_11 = 2776710897U;
unsigned short var_12 = (unsigned short)20445;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
