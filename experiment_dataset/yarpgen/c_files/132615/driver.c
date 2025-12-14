#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -793331789;
int var_3 = 1240775954;
unsigned int var_7 = 3151320653U;
unsigned short var_9 = (unsigned short)59480;
unsigned short var_10 = (unsigned short)19864;
signed char var_11 = (signed char)78;
int zero = 0;
long long int var_12 = -1592348544380325464LL;
unsigned long long int var_13 = 10143143624482021914ULL;
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
