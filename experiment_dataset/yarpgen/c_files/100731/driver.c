#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-53;
signed char var_1 = (signed char)40;
long long int var_4 = -8998479722777436085LL;
int var_8 = -840081991;
int var_9 = -1829764112;
int zero = 0;
unsigned int var_10 = 1326851530U;
signed char var_11 = (signed char)-82;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
