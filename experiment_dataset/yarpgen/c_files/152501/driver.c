#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned long long int var_6 = 17945891207062156347ULL;
int var_8 = 199494266;
_Bool var_9 = (_Bool)1;
int zero = 0;
long long int var_18 = 6365641183502020253LL;
int var_19 = 1244207127;
int var_20 = -1999914711;
signed char var_21 = (signed char)-112;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
