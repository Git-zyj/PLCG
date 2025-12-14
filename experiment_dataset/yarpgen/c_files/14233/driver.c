#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 10243845434794258169ULL;
unsigned long long int var_9 = 17265935927997105681ULL;
long long int var_11 = -14369201436851247LL;
int zero = 0;
unsigned int var_12 = 1764494546U;
unsigned short var_13 = (unsigned short)36168;
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
