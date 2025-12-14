#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 746876203925605705ULL;
int var_5 = -2090928052;
long long int var_8 = -7222303867847772899LL;
int var_10 = -628912099;
unsigned long long int var_11 = 5171126600876315112ULL;
unsigned long long int var_12 = 448958410644882890ULL;
unsigned short var_15 = (unsigned short)37463;
unsigned long long int var_16 = 8630594481322226957ULL;
long long int var_17 = -8859357608174556518LL;
int zero = 0;
int var_18 = -1691552376;
unsigned long long int var_19 = 3388605853357873454ULL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
