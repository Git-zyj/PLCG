#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)70;
signed char var_2 = (signed char)62;
unsigned long long int var_3 = 7908295562153271941ULL;
signed char var_5 = (signed char)78;
signed char var_8 = (signed char)-42;
long long int var_9 = -1131220759968880088LL;
int var_10 = -1522192342;
int var_11 = -192695766;
int zero = 0;
long long int var_12 = 7987914349337417705LL;
long long int var_13 = 3278116021827951235LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
