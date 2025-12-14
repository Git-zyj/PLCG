#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)11;
short var_2 = (short)28846;
int var_3 = -948387170;
long long int var_6 = 4593140834271776885LL;
int var_7 = -192774635;
int zero = 0;
unsigned int var_10 = 1048332285U;
long long int var_11 = 8687108165640601232LL;
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
