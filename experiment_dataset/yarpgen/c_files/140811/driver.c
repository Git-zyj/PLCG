#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3394270661091257309LL;
unsigned short var_4 = (unsigned short)50893;
unsigned int var_5 = 1811283193U;
long long int var_6 = -3886588181127584687LL;
signed char var_7 = (signed char)-16;
int zero = 0;
int var_11 = 1654324839;
unsigned short var_12 = (unsigned short)3121;
void init() {
}

void checksum() {
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
