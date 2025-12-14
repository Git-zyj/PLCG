#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)119;
long long int var_2 = 4898713643514875648LL;
signed char var_3 = (signed char)-126;
signed char var_10 = (signed char)94;
unsigned long long int var_11 = 16369432384909715613ULL;
short var_14 = (short)-21697;
short var_15 = (short)24795;
int zero = 0;
unsigned char var_19 = (unsigned char)210;
unsigned long long int var_20 = 10769253889429969288ULL;
int var_21 = 2141789753;
signed char var_22 = (signed char)106;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
