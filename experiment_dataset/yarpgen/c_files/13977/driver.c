#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)7975;
unsigned int var_8 = 1207762263U;
unsigned long long int var_12 = 13000114044262955639ULL;
unsigned long long int var_13 = 17563641102807709510ULL;
unsigned short var_16 = (unsigned short)33409;
int zero = 0;
long long int var_19 = -1129543007932142646LL;
short var_20 = (short)22717;
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
