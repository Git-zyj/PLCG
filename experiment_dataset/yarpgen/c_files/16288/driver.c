#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -45088064;
_Bool var_4 = (_Bool)0;
int var_5 = -90558972;
int var_8 = -462355812;
unsigned short var_9 = (unsigned short)44330;
int zero = 0;
unsigned long long int var_10 = 2789462191251248484ULL;
long long int var_11 = -179754447460940134LL;
int var_12 = 821662786;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
