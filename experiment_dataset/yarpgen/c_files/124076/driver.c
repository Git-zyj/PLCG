#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12732338714510420708ULL;
long long int var_3 = -3067311002458339918LL;
unsigned int var_4 = 3640278680U;
unsigned long long int var_8 = 17315635900823218699ULL;
int var_9 = -837345831;
int zero = 0;
long long int var_10 = 1938124536146647644LL;
long long int var_11 = 7850872609924516456LL;
unsigned short var_12 = (unsigned short)29758;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
