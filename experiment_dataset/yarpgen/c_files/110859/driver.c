#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)25442;
unsigned long long int var_4 = 10093454087513646534ULL;
int var_6 = -1786963438;
unsigned short var_7 = (unsigned short)31514;
unsigned long long int var_11 = 1274177295030940487ULL;
long long int var_13 = 9096127161282701815LL;
unsigned long long int var_14 = 11453053202035756658ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)158;
unsigned long long int var_19 = 18410704236940163225ULL;
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
