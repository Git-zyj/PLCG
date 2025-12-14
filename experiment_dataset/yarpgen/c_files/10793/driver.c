#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)13;
unsigned short var_9 = (unsigned short)38591;
long long int var_11 = -5668453331036100525LL;
short var_13 = (short)-16994;
int zero = 0;
long long int var_16 = -2686836158901579458LL;
unsigned char var_17 = (unsigned char)84;
signed char var_18 = (signed char)-110;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
