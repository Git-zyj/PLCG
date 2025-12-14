#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3586278325U;
short var_3 = (short)5888;
unsigned long long int var_4 = 1349722657703111671ULL;
unsigned int var_6 = 322747937U;
long long int var_9 = -8917762028631128538LL;
int zero = 0;
unsigned char var_11 = (unsigned char)49;
int var_12 = -1375717177;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
