#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)86;
int var_6 = -1812217677;
int var_9 = 61853577;
unsigned long long int var_13 = 17009587323022009889ULL;
int var_14 = -1999767217;
int var_16 = -1080232839;
int zero = 0;
_Bool var_19 = (_Bool)1;
int var_20 = -203322566;
long long int var_21 = 9160942988059400354LL;
long long int var_22 = 5223917962410736399LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
