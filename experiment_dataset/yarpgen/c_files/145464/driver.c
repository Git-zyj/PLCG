#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6836297831409023235LL;
int var_2 = 1717461107;
long long int var_3 = -7694664607235603246LL;
long long int var_4 = -2914779965549616219LL;
long long int var_5 = -7507937767374359884LL;
int var_6 = 1006721823;
unsigned int var_7 = 2488823305U;
unsigned int var_8 = 2916198246U;
long long int var_9 = 6692716032757382987LL;
long long int var_10 = 7034441271986653270LL;
int zero = 0;
unsigned int var_11 = 2681139306U;
long long int var_12 = 1287691827855485110LL;
long long int var_13 = 6056757908155078716LL;
int var_14 = -2045483475;
unsigned int var_15 = 1859506478U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
