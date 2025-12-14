#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)62;
unsigned long long int var_5 = 3831864541383602982ULL;
signed char var_13 = (signed char)121;
long long int var_16 = -8605649411700713858LL;
int zero = 0;
unsigned char var_20 = (unsigned char)157;
long long int var_21 = 9176206564868934665LL;
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
