#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)167;
int var_7 = -1827212757;
long long int var_9 = -2363698622129536238LL;
short var_12 = (short)3816;
int zero = 0;
int var_13 = -1856071847;
unsigned long long int var_14 = 17725648174764894756ULL;
unsigned short var_15 = (unsigned short)28256;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
