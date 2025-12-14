#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6619554862573142347LL;
unsigned int var_2 = 456312063U;
long long int var_6 = -2349022006433676397LL;
long long int var_13 = -3528406122030636617LL;
unsigned int var_14 = 2613794647U;
short var_17 = (short)28113;
int zero = 0;
unsigned int var_18 = 4014730076U;
long long int var_19 = -6892200973503174362LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
