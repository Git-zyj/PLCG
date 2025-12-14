#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1526677417;
_Bool var_4 = (_Bool)0;
signed char var_6 = (signed char)-98;
_Bool var_8 = (_Bool)1;
int zero = 0;
int var_11 = 1146136288;
int var_12 = 513821693;
long long int var_13 = -7961702660063879735LL;
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
