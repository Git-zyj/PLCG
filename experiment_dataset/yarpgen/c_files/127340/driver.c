#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -9119830450593037404LL;
int var_2 = 1818877668;
long long int var_4 = 981058484210440718LL;
long long int var_6 = -7876197144136667604LL;
long long int var_7 = -500170154942808188LL;
unsigned char var_8 = (unsigned char)186;
int var_10 = 1581190366;
int zero = 0;
unsigned char var_11 = (unsigned char)173;
int var_12 = -1455621304;
int var_13 = -334623671;
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
