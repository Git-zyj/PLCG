#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_12 = 8216358047845851137LL;
_Bool var_14 = (_Bool)0;
unsigned short var_16 = (unsigned short)12290;
int zero = 0;
unsigned short var_18 = (unsigned short)18335;
long long int var_19 = -3167888615487381940LL;
void init() {
}

void checksum() {
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
