#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 999099255U;
unsigned long long int var_3 = 10212583106131348185ULL;
unsigned short var_4 = (unsigned short)47398;
long long int var_10 = -5196120605764264666LL;
short var_12 = (short)6215;
long long int var_13 = -316143513749884504LL;
_Bool var_14 = (_Bool)1;
long long int var_16 = 3158315072505939257LL;
long long int var_18 = -7001727683260494527LL;
int zero = 0;
long long int var_19 = -2557541028049940961LL;
unsigned short var_20 = (unsigned short)35420;
int var_21 = 1780442053;
long long int var_22 = 6375010816237097285LL;
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
