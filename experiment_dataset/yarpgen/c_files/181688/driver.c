#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4769046877588446732LL;
long long int var_3 = -8618413571494422448LL;
long long int var_4 = 7727677987303882086LL;
int var_5 = 1057570503;
unsigned char var_7 = (unsigned char)117;
long long int var_8 = -7917329123287693897LL;
unsigned char var_9 = (unsigned char)195;
long long int var_10 = 3004389113980679709LL;
unsigned char var_11 = (unsigned char)96;
int zero = 0;
long long int var_15 = -5327868897077517309LL;
long long int var_16 = 5935051886023116352LL;
long long int var_17 = 2463503408372131337LL;
unsigned char var_18 = (unsigned char)189;
long long int var_19 = 6339171730483083429LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
