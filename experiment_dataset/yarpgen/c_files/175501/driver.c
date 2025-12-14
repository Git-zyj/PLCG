#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)104;
short var_1 = (short)12663;
unsigned long long int var_2 = 8935905703877678416ULL;
long long int var_3 = -3681747186410741946LL;
_Bool var_8 = (_Bool)0;
long long int var_9 = 3589904122398016500LL;
int zero = 0;
long long int var_12 = -7517324922616134398LL;
long long int var_13 = 7887290132546912130LL;
void init() {
}

void checksum() {
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
