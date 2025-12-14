#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17964;
int var_1 = -577047566;
unsigned long long int var_3 = 13143503665497397719ULL;
short var_4 = (short)-4210;
signed char var_5 = (signed char)14;
int var_7 = -1817682347;
unsigned short var_8 = (unsigned short)64339;
long long int var_10 = -7854532480861765951LL;
unsigned long long int var_14 = 3110716522689969471ULL;
int zero = 0;
long long int var_16 = 2729997909537108583LL;
unsigned long long int var_17 = 14548399661298583266ULL;
unsigned long long int var_18 = 14791431115693007315ULL;
short var_19 = (short)7031;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
