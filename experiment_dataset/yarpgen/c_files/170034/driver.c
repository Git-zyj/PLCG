#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1450635709;
unsigned short var_2 = (unsigned short)44849;
long long int var_6 = 2613801778431406864LL;
long long int var_7 = 2660088205375099603LL;
unsigned short var_9 = (unsigned short)43280;
int zero = 0;
unsigned int var_12 = 1446948178U;
unsigned short var_13 = (unsigned short)32776;
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
