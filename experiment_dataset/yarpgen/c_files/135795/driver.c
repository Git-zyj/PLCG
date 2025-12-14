#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -45670226;
long long int var_5 = -1240717644096350454LL;
unsigned char var_7 = (unsigned char)134;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 18334761600733104422ULL;
int zero = 0;
int var_16 = -1672715696;
unsigned int var_17 = 718155014U;
void init() {
}

void checksum() {
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
