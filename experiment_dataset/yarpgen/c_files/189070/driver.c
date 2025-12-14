#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14772;
long long int var_1 = -7396559094735402980LL;
unsigned long long int var_2 = 6343366249051420103ULL;
long long int var_6 = 7654132476810033210LL;
unsigned char var_9 = (unsigned char)195;
_Bool var_11 = (_Bool)0;
long long int var_12 = -4482615737372777477LL;
unsigned long long int var_13 = 4051545461316394237ULL;
int zero = 0;
long long int var_15 = 9170330685447203389LL;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 13015255105857510839ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
