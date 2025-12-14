#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-48;
unsigned short var_1 = (unsigned short)39060;
long long int var_3 = 8046218145249150655LL;
_Bool var_5 = (_Bool)0;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 712064409480561775ULL;
int zero = 0;
unsigned int var_14 = 3647979777U;
unsigned char var_15 = (unsigned char)127;
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
