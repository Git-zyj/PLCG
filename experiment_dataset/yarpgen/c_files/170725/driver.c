#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 774755374U;
unsigned int var_1 = 1087295223U;
unsigned short var_3 = (unsigned short)1274;
signed char var_9 = (signed char)-55;
long long int var_12 = 6803867766270484179LL;
int zero = 0;
unsigned long long int var_14 = 17035067463920073127ULL;
unsigned short var_15 = (unsigned short)62015;
unsigned long long int var_16 = 965084741235547877ULL;
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
