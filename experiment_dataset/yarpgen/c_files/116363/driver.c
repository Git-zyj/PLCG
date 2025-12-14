#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10936357731237855074ULL;
signed char var_1 = (signed char)-82;
signed char var_4 = (signed char)-5;
long long int var_5 = 1709532540740261069LL;
unsigned int var_6 = 3287832010U;
long long int var_8 = -3274703920911499702LL;
int var_9 = -1204058599;
unsigned int var_10 = 2393169923U;
int zero = 0;
unsigned int var_13 = 3594562824U;
int var_14 = 811246149;
int var_15 = 1145815619;
void init() {
}

void checksum() {
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
