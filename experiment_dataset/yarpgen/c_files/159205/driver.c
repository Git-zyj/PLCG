#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9111725497878423775LL;
int var_2 = 388057092;
unsigned char var_5 = (unsigned char)53;
long long int var_9 = -5538272976593954439LL;
short var_10 = (short)22990;
int var_13 = -877847911;
int zero = 0;
int var_20 = 321186553;
_Bool var_21 = (_Bool)1;
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
