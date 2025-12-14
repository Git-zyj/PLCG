#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -326555028;
int var_3 = -1048667289;
unsigned int var_7 = 3682066509U;
int var_12 = -982588429;
unsigned short var_15 = (unsigned short)33728;
unsigned short var_19 = (unsigned short)39664;
int zero = 0;
unsigned int var_20 = 2998350451U;
int var_21 = 400999502;
unsigned short var_22 = (unsigned short)8899;
long long int var_23 = -9079896705366451500LL;
int var_24 = -1195782839;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
