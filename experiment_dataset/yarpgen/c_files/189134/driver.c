#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)34;
long long int var_3 = 7193286125644379859LL;
signed char var_7 = (signed char)-7;
signed char var_13 = (signed char)-127;
int zero = 0;
_Bool var_17 = (_Bool)1;
int var_18 = 1970888680;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
