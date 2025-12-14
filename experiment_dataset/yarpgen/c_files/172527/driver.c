#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1204160886;
unsigned short var_1 = (unsigned short)34195;
unsigned long long int var_13 = 5891858709138558862ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)9194;
unsigned long long int var_21 = 12499286950303768038ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
