#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-1;
long long int var_2 = 8865653667806626731LL;
unsigned char var_4 = (unsigned char)22;
unsigned char var_8 = (unsigned char)169;
_Bool var_10 = (_Bool)0;
int zero = 0;
int var_12 = -785309400;
unsigned int var_13 = 1401342880U;
void init() {
}

void checksum() {
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
