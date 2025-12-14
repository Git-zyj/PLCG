#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9598546176337893521ULL;
short var_2 = (short)15222;
unsigned long long int var_6 = 464248572798238913ULL;
unsigned char var_7 = (unsigned char)157;
short var_9 = (short)-21285;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 2227895519U;
long long int var_14 = 4122095587281272935LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
