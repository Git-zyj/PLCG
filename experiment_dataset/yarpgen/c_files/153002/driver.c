#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -699655174;
long long int var_6 = 3503252039197896346LL;
_Bool var_7 = (_Bool)0;
long long int var_8 = 259659836701678913LL;
signed char var_11 = (signed char)77;
int zero = 0;
unsigned long long int var_13 = 13803363699475584473ULL;
int var_14 = 159179075;
unsigned long long int var_15 = 13816960198874333391ULL;
void init() {
}

void checksum() {
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
