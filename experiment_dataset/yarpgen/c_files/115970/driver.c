#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4147162979527953270ULL;
unsigned long long int var_2 = 2393161865529094055ULL;
short var_3 = (short)15034;
int var_5 = -1303225705;
unsigned int var_8 = 3549194742U;
long long int var_9 = 6398542808710134359LL;
int var_10 = 935029844;
unsigned short var_11 = (unsigned short)47554;
int zero = 0;
unsigned long long int var_14 = 1876402930565344787ULL;
int var_15 = 615142400;
unsigned long long int var_16 = 12776272924886595254ULL;
void init() {
}

void checksum() {
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
