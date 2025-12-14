#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-77;
unsigned char var_3 = (unsigned char)62;
unsigned int var_8 = 1109805779U;
unsigned char var_11 = (unsigned char)216;
int zero = 0;
long long int var_12 = 1526884588369898681LL;
signed char var_13 = (signed char)109;
unsigned int var_14 = 1639590296U;
short var_15 = (short)24048;
signed char var_16 = (signed char)70;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
