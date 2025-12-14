#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 528557957086743641LL;
int var_3 = -449435797;
int var_4 = 2104208012;
long long int var_5 = -8318184671028139761LL;
int var_8 = 1735796861;
long long int var_9 = 6454261903329148992LL;
short var_10 = (short)12276;
long long int var_12 = -254854294051188282LL;
int zero = 0;
long long int var_13 = 2280070682367087937LL;
short var_14 = (short)16069;
long long int var_15 = -989994067921924761LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
