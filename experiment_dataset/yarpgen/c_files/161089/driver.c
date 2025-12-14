#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -4539332841565266930LL;
unsigned short var_4 = (unsigned short)11606;
unsigned int var_8 = 1957772113U;
int zero = 0;
unsigned long long int var_11 = 5227484211944738004ULL;
unsigned short var_12 = (unsigned short)61295;
long long int var_13 = -7709912483090822968LL;
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
