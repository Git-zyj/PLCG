#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)175;
unsigned long long int var_6 = 17187383214476585846ULL;
long long int var_9 = -6917463247125067159LL;
unsigned char var_12 = (unsigned char)231;
long long int var_13 = -428711347130312851LL;
unsigned int var_14 = 3226479194U;
_Bool var_16 = (_Bool)0;
int zero = 0;
long long int var_17 = -9076359567326194329LL;
unsigned int var_18 = 2230376929U;
unsigned char var_19 = (unsigned char)25;
void init() {
}

void checksum() {
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
