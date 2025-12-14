#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-110;
unsigned int var_2 = 3618751440U;
unsigned long long int var_4 = 16878212388207071132ULL;
unsigned short var_9 = (unsigned short)4186;
unsigned int var_16 = 1422392225U;
int zero = 0;
unsigned int var_18 = 3887614580U;
unsigned int var_19 = 2973097266U;
unsigned int var_20 = 2218623459U;
void init() {
}

void checksum() {
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
