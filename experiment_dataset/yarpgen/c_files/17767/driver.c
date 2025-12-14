#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2437016179608013475LL;
int var_5 = -1153263465;
_Bool var_8 = (_Bool)1;
unsigned long long int var_12 = 14784653401143099514ULL;
int zero = 0;
_Bool var_17 = (_Bool)1;
long long int var_18 = -746704048353900205LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
