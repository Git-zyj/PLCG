#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 2092957142;
int var_6 = -1388076873;
int var_7 = -769172895;
int var_8 = 23098091;
int var_13 = -1454381489;
int zero = 0;
long long int var_18 = 1048023227464551985LL;
int var_19 = -2080128208;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
