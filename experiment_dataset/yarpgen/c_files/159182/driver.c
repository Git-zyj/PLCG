#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1514440438;
unsigned char var_5 = (unsigned char)107;
unsigned char var_8 = (unsigned char)108;
signed char var_11 = (signed char)93;
_Bool var_13 = (_Bool)1;
int zero = 0;
int var_15 = 204430688;
long long int var_16 = 4063050272822540465LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
