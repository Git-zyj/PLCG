#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1514116622778885583LL;
short var_4 = (short)-32767;
long long int var_6 = 1041956411939317810LL;
long long int var_8 = 7684940118278302137LL;
int zero = 0;
unsigned char var_15 = (unsigned char)154;
unsigned char var_16 = (unsigned char)167;
void init() {
}

void checksum() {
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
