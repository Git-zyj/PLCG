#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8923191325129771643ULL;
signed char var_2 = (signed char)115;
unsigned int var_6 = 3664240530U;
unsigned long long int var_8 = 17911210463445381936ULL;
unsigned long long int var_9 = 8296814205654012175ULL;
unsigned long long int var_10 = 1832466393804386905ULL;
int zero = 0;
signed char var_11 = (signed char)-55;
unsigned long long int var_12 = 18123350522542972668ULL;
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
