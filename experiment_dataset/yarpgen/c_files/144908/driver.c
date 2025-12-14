#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1041013841107797509LL;
unsigned short var_2 = (unsigned short)8406;
int var_6 = -1287153646;
unsigned short var_7 = (unsigned short)53554;
signed char var_10 = (signed char)101;
unsigned int var_11 = 3231659794U;
int zero = 0;
unsigned short var_12 = (unsigned short)40887;
int var_13 = -1472860350;
unsigned short var_14 = (unsigned short)31194;
unsigned int var_15 = 803968535U;
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
