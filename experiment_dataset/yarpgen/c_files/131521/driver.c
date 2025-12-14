#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -1619088642438690487LL;
unsigned char var_12 = (unsigned char)235;
unsigned char var_17 = (unsigned char)220;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = 2623661344489582793LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
