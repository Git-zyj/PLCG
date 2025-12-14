#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)62785;
unsigned long long int var_2 = 2084680195011264427ULL;
long long int var_3 = 7484945002263972413LL;
_Bool var_4 = (_Bool)0;
long long int var_9 = 1202429959292423758LL;
int zero = 0;
short var_14 = (short)28353;
long long int var_15 = 9116572807981228710LL;
void init() {
}

void checksum() {
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
