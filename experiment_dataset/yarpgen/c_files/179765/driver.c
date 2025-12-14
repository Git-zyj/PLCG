#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 646808808U;
short var_3 = (short)-12703;
signed char var_4 = (signed char)45;
int var_6 = -817139900;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)-107;
int var_9 = 977277820;
signed char var_10 = (signed char)35;
int zero = 0;
long long int var_11 = -2506523163807336087LL;
unsigned long long int var_12 = 5330449154935925049ULL;
unsigned int var_13 = 1476720049U;
long long int var_14 = -4009174302374167161LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
