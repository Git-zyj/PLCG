#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)25871;
long long int var_4 = 8635636822880372228LL;
long long int var_18 = -8589736565360676846LL;
signed char var_19 = (signed char)43;
int zero = 0;
short var_20 = (short)-27803;
unsigned int var_21 = 3932181611U;
unsigned int var_22 = 4083710231U;
long long int var_23 = -3855208870624111298LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
