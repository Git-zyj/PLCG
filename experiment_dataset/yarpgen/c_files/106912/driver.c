#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1859746970U;
unsigned int var_6 = 1266395639U;
short var_8 = (short)11601;
unsigned char var_9 = (unsigned char)180;
int zero = 0;
_Bool var_10 = (_Bool)0;
long long int var_11 = -198630170510727510LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
