#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 11274842180201750988ULL;
unsigned int var_5 = 2822818470U;
int var_14 = -650274301;
unsigned short var_19 = (unsigned short)10831;
int zero = 0;
unsigned int var_20 = 4213069585U;
int var_21 = 884426035;
unsigned long long int var_22 = 14433581970535835395ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
