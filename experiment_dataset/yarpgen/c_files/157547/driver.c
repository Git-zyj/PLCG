#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)84;
signed char var_13 = (signed char)120;
long long int var_14 = 4115925708311360776LL;
unsigned int var_16 = 731438418U;
signed char var_17 = (signed char)-27;
signed char var_18 = (signed char)0;
int zero = 0;
signed char var_20 = (signed char)12;
int var_21 = -1789790585;
signed char var_22 = (signed char)77;
signed char var_23 = (signed char)6;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
