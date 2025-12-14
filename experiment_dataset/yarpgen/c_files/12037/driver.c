#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13744132892712274866ULL;
unsigned long long int var_3 = 17093037056351750626ULL;
unsigned long long int var_4 = 4574336300115359114ULL;
unsigned long long int var_6 = 15104839863920560579ULL;
unsigned long long int var_8 = 15161979513352941688ULL;
unsigned long long int var_10 = 3809990428813727403ULL;
unsigned long long int var_11 = 16553381453025394114ULL;
unsigned long long int var_12 = 16049508195841243999ULL;
unsigned long long int var_13 = 1411580710025106608ULL;
unsigned long long int var_14 = 17056633406928858188ULL;
unsigned long long int var_15 = 10864235019323743509ULL;
unsigned long long int var_17 = 136287111626100213ULL;
int zero = 0;
unsigned long long int var_19 = 2585185570125297364ULL;
unsigned long long int var_20 = 130402629263831550ULL;
unsigned long long int var_21 = 6576024832460580184ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
