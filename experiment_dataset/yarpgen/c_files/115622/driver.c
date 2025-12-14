#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11634101066184876281ULL;
unsigned long long int var_2 = 15992773339277429885ULL;
unsigned short var_4 = (unsigned short)40871;
unsigned long long int var_6 = 15912338696190624320ULL;
unsigned long long int var_11 = 2380890392301793171ULL;
unsigned short var_14 = (unsigned short)8667;
int zero = 0;
unsigned short var_16 = (unsigned short)22591;
unsigned short var_17 = (unsigned short)47887;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
