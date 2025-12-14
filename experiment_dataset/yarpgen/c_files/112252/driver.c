#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29044;
long long int var_1 = -4082775062914217104LL;
unsigned short var_3 = (unsigned short)16366;
int zero = 0;
long long int var_14 = -2908871205557397873LL;
long long int var_15 = -4225618827779226759LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
