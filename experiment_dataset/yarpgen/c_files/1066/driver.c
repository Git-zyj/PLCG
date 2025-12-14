#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 371231442;
long long int var_3 = -4024554360312157458LL;
long long int var_4 = -5468443856883087129LL;
unsigned long long int var_6 = 273906107778256182ULL;
int var_7 = -1349565251;
long long int var_8 = -6951070620783484031LL;
int var_12 = 517089146;
int zero = 0;
unsigned int var_14 = 1853154403U;
unsigned char var_15 = (unsigned char)149;
signed char var_16 = (signed char)-49;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
