#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1056404387U;
unsigned char var_5 = (unsigned char)125;
unsigned int var_10 = 3435532658U;
int zero = 0;
unsigned int var_11 = 260317058U;
unsigned int var_12 = 1427189792U;
long long int var_13 = 3176260928141601931LL;
_Bool var_14 = (_Bool)1;
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
