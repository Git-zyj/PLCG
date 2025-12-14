#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 9147866763276745676LL;
short var_5 = (short)24836;
int var_7 = -191284179;
int var_11 = -220429119;
long long int var_14 = -3413220913454625370LL;
short var_19 = (short)-14545;
int zero = 0;
int var_20 = 2096695826;
short var_21 = (short)-29285;
int var_22 = 512378926;
int var_23 = 1574200481;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
