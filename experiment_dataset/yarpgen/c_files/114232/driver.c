#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14328550476413929949ULL;
unsigned long long int var_2 = 13266258343279416191ULL;
long long int var_7 = -8968089345801023151LL;
int zero = 0;
unsigned long long int var_19 = 17307978460874086627ULL;
short var_20 = (short)3339;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
