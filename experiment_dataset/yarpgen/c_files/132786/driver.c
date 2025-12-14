#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2280419539421080058LL;
unsigned int var_2 = 2891535382U;
short var_5 = (short)-20037;
short var_11 = (short)-27584;
unsigned int var_13 = 2719677387U;
int zero = 0;
short var_18 = (short)29058;
long long int var_19 = 8776053655567280313LL;
void init() {
}

void checksum() {
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
