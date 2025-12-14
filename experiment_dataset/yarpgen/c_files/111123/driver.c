#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8045625623466549350ULL;
unsigned int var_3 = 2170675508U;
short var_9 = (short)29632;
long long int var_16 = -3401997414542908389LL;
int zero = 0;
long long int var_18 = -4376743008925986373LL;
unsigned short var_19 = (unsigned short)64376;
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
