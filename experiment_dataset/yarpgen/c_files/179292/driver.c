#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)7375;
unsigned long long int var_6 = 7880899836493338484ULL;
int var_7 = 76234496;
short var_8 = (short)-26272;
_Bool var_9 = (_Bool)1;
int zero = 0;
long long int var_11 = 5285466820487313595LL;
int var_12 = -741738785;
unsigned char var_13 = (unsigned char)54;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
