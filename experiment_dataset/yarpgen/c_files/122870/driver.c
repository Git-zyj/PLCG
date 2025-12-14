#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 478640296;
int var_1 = 900142075;
int var_2 = -1403777465;
unsigned long long int var_5 = 2406946708398068747ULL;
int var_8 = -967323366;
int var_9 = -1435884130;
int var_10 = 424508662;
int zero = 0;
int var_11 = -1671607866;
int var_12 = 1210879268;
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
