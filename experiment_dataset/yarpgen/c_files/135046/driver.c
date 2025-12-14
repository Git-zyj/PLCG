#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7764983446892733104LL;
unsigned int var_3 = 2771511285U;
unsigned short var_4 = (unsigned short)30189;
unsigned char var_6 = (unsigned char)42;
signed char var_7 = (signed char)114;
long long int var_9 = 8597836485467631725LL;
unsigned short var_10 = (unsigned short)60737;
unsigned short var_11 = (unsigned short)14368;
int zero = 0;
long long int var_13 = 2202668706841163567LL;
unsigned int var_14 = 1441610769U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
