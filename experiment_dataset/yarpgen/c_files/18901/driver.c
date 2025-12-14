#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7780956678005264820LL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 11926994952883556698ULL;
long long int var_7 = -4279986126680811582LL;
long long int var_8 = 6153439952148343179LL;
long long int var_9 = -7156029369644046941LL;
int zero = 0;
unsigned long long int var_10 = 2428548346668332041ULL;
long long int var_11 = 2197667747004008180LL;
long long int var_12 = 4217910599028596360LL;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
