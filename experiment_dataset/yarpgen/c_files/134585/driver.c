#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)12963;
long long int var_8 = 4220053578610828510LL;
unsigned short var_12 = (unsigned short)21523;
int zero = 0;
int var_19 = -533273519;
unsigned int var_20 = 3315409657U;
long long int var_21 = 2143992585867619666LL;
unsigned char var_22 = (unsigned char)126;
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
