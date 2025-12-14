#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)25;
_Bool var_4 = (_Bool)1;
unsigned char var_13 = (unsigned char)181;
int zero = 0;
unsigned char var_17 = (unsigned char)231;
int var_18 = -1386155920;
unsigned int var_19 = 4061707365U;
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
