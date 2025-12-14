#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 120359612549039919LL;
unsigned short var_2 = (unsigned short)6728;
long long int var_8 = 4903108467543488977LL;
int zero = 0;
long long int var_15 = -6396045280944700984LL;
long long int var_16 = -5239217561857252668LL;
unsigned long long int var_17 = 14058375446791708550ULL;
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
