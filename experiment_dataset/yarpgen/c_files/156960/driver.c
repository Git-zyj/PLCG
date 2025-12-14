#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2493762204271845365LL;
short var_2 = (short)22608;
_Bool var_3 = (_Bool)0;
int zero = 0;
long long int var_12 = 7932509557511728762LL;
int var_13 = 2074637682;
long long int var_14 = 5327200740214310980LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
