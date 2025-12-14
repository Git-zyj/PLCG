#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 13362288594390824653ULL;
signed char var_4 = (signed char)-65;
int var_10 = 1301001958;
signed char var_11 = (signed char)107;
int zero = 0;
unsigned short var_18 = (unsigned short)52267;
unsigned long long int var_19 = 9024503226470617114ULL;
int var_20 = 1862479297;
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
