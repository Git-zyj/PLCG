#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)121;
long long int var_2 = 3171375211596785965LL;
unsigned int var_5 = 71504345U;
signed char var_8 = (signed char)78;
long long int var_16 = 7510268205687594678LL;
int zero = 0;
unsigned int var_18 = 3419672937U;
unsigned short var_19 = (unsigned short)39234;
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
