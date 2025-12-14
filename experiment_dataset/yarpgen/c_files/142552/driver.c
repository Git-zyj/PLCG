#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4249117423U;
unsigned char var_6 = (unsigned char)147;
long long int var_8 = -1262965813879617264LL;
long long int var_9 = -6599022669622298347LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
long long int var_13 = 2951959438067687561LL;
unsigned short var_14 = (unsigned short)8572;
long long int var_15 = -1003917557147189676LL;
unsigned long long int var_16 = 14538698779638875433ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
