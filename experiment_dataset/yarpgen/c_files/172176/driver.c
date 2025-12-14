#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)13;
long long int var_2 = 1514231210868888745LL;
long long int var_3 = -5080697858668151840LL;
long long int var_7 = 2674658952423885468LL;
unsigned int var_8 = 2592386115U;
int zero = 0;
unsigned int var_11 = 4048579303U;
unsigned int var_12 = 1158476819U;
long long int var_13 = 7982481931470566437LL;
long long int var_14 = 6103175325962899271LL;
int var_15 = -263488619;
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
