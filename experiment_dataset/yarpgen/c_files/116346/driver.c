#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2744120312726737838LL;
signed char var_4 = (signed char)-1;
unsigned int var_7 = 765649181U;
unsigned char var_15 = (unsigned char)176;
signed char var_16 = (signed char)108;
int zero = 0;
unsigned long long int var_17 = 7635990805608666439ULL;
signed char var_18 = (signed char)-121;
long long int var_19 = 2815924430364055698LL;
long long int var_20 = 2169618322959594831LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
