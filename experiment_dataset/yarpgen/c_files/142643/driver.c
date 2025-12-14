#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1118710698;
int var_1 = 2125371136;
unsigned long long int var_14 = 16695041541112608092ULL;
unsigned short var_15 = (unsigned short)27350;
int zero = 0;
unsigned int var_17 = 65491711U;
unsigned char var_18 = (unsigned char)234;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
