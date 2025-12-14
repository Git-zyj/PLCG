#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 434001901U;
unsigned short var_1 = (unsigned short)5306;
unsigned long long int var_4 = 1437119817553379021ULL;
int var_5 = 972477204;
unsigned long long int var_9 = 1115305891886030000ULL;
int zero = 0;
int var_11 = 589850331;
unsigned short var_12 = (unsigned short)59963;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
