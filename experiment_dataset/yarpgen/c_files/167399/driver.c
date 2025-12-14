#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1587502699;
unsigned long long int var_1 = 2536350842274196537ULL;
unsigned int var_2 = 3100593492U;
unsigned char var_4 = (unsigned char)33;
int var_6 = -1244479203;
long long int var_10 = 6101754997144378588LL;
int zero = 0;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)34;
unsigned long long int var_13 = 17524698440312291264ULL;
void init() {
}

void checksum() {
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
