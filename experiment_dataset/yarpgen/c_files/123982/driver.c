#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2509161907U;
unsigned char var_10 = (unsigned char)150;
unsigned int var_15 = 3977508770U;
int zero = 0;
_Bool var_17 = (_Bool)0;
long long int var_18 = 7272049329726522032LL;
unsigned long long int var_19 = 612831433076398062ULL;
unsigned short var_20 = (unsigned short)50600;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
