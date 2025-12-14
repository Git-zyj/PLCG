#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-49;
unsigned char var_1 = (unsigned char)135;
unsigned int var_7 = 940294418U;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)58839;
int zero = 0;
unsigned long long int var_18 = 16027878065642283305ULL;
unsigned short var_19 = (unsigned short)34899;
int var_20 = -1910918090;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
