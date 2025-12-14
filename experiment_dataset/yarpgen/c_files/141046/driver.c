#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1507228125560459700ULL;
long long int var_9 = 6424397055630554844LL;
unsigned long long int var_12 = 15923664138138489158ULL;
signed char var_13 = (signed char)69;
int zero = 0;
unsigned short var_19 = (unsigned short)57577;
int var_20 = 2092122434;
unsigned char var_21 = (unsigned char)152;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
