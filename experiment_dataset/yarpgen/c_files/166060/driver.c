#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 589123053986882284ULL;
unsigned short var_3 = (unsigned short)2431;
unsigned short var_5 = (unsigned short)8843;
unsigned short var_8 = (unsigned short)7374;
int zero = 0;
int var_13 = 858091432;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)46789;
unsigned int var_16 = 444015946U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
