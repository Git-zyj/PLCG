#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)18;
unsigned int var_3 = 3932992274U;
signed char var_4 = (signed char)-62;
_Bool var_5 = (_Bool)1;
int zero = 0;
short var_10 = (short)-24081;
unsigned long long int var_11 = 12262563574500718423ULL;
long long int var_12 = -7231216158253064533LL;
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
