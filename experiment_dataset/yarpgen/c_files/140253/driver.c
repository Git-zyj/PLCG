#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 6417881441472542646ULL;
long long int var_11 = 4766150006084149936LL;
int var_12 = 1220636656;
unsigned short var_13 = (unsigned short)57936;
unsigned long long int var_16 = 16106025109852253589ULL;
int zero = 0;
short var_20 = (short)-18331;
int var_21 = -391551389;
_Bool var_22 = (_Bool)0;
short var_23 = (short)-26789;
_Bool var_24 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
