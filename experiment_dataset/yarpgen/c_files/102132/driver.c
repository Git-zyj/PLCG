#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)55;
unsigned short var_2 = (unsigned short)50743;
unsigned int var_9 = 1974737469U;
long long int var_10 = 346174348685242157LL;
int zero = 0;
unsigned int var_11 = 1455612758U;
unsigned int var_12 = 733711062U;
unsigned short var_13 = (unsigned short)7517;
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
