#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)3228;
short var_6 = (short)-24738;
unsigned long long int var_7 = 1250847624815504991ULL;
_Bool var_10 = (_Bool)0;
short var_15 = (short)29331;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = -142533077;
short var_19 = (short)-14768;
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
