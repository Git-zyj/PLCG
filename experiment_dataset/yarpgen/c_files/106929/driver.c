#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 740598167075640292ULL;
unsigned long long int var_1 = 14448725203235101607ULL;
int var_5 = 88571663;
unsigned long long int var_8 = 17216286481511770059ULL;
signed char var_9 = (signed char)-55;
unsigned long long int var_10 = 13286483557289803695ULL;
short var_11 = (short)-17832;
int zero = 0;
long long int var_12 = 7019760555472589229LL;
int var_13 = -1703995038;
long long int var_14 = 2803652699849660089LL;
unsigned short var_15 = (unsigned short)65344;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
