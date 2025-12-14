#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1830323957;
unsigned short var_1 = (unsigned short)33599;
int var_2 = -224098201;
unsigned int var_3 = 1937675120U;
_Bool var_8 = (_Bool)1;
long long int var_9 = -6736063085211565941LL;
int zero = 0;
unsigned short var_10 = (unsigned short)25891;
signed char var_11 = (signed char)7;
long long int var_12 = 7567898957637865655LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
