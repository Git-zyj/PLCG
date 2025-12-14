#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9900;
signed char var_1 = (signed char)29;
short var_2 = (short)-11218;
long long int var_3 = -6343703488941964216LL;
unsigned long long int var_4 = 4150539266177960401ULL;
unsigned long long int var_7 = 4094509807813261872ULL;
int var_9 = 40885257;
signed char var_10 = (signed char)87;
unsigned char var_11 = (unsigned char)67;
unsigned long long int var_12 = 16464504756584740000ULL;
int zero = 0;
int var_16 = -1256461733;
signed char var_17 = (signed char)58;
signed char var_18 = (signed char)-18;
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
