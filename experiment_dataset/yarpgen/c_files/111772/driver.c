#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 720668791642807346ULL;
unsigned long long int var_4 = 14482099158340249643ULL;
long long int var_8 = 2882009821935992047LL;
_Bool var_11 = (_Bool)1;
int var_12 = 112717401;
int zero = 0;
unsigned long long int var_17 = 11365892358137904804ULL;
unsigned char var_18 = (unsigned char)53;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
