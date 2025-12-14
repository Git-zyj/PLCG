#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)74;
int var_7 = -57469047;
unsigned int var_9 = 822420904U;
long long int var_17 = -602743038532423346LL;
int zero = 0;
unsigned int var_19 = 3096406683U;
unsigned short var_20 = (unsigned short)50943;
unsigned short var_21 = (unsigned short)34443;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
