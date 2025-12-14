#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1756208791571133235ULL;
signed char var_3 = (signed char)101;
int var_6 = 89077368;
short var_8 = (short)-10391;
int zero = 0;
unsigned char var_17 = (unsigned char)38;
unsigned long long int var_18 = 13312309220246811602ULL;
unsigned long long int var_19 = 15019733888495500135ULL;
unsigned long long int var_20 = 10005612522879843571ULL;
short var_21 = (short)-29823;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
