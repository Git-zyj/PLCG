#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)152;
unsigned long long int var_3 = 17493077996900423365ULL;
unsigned long long int var_4 = 16504129714691056036ULL;
unsigned char var_5 = (unsigned char)181;
short var_6 = (short)-17945;
short var_7 = (short)-13172;
long long int var_8 = 4503046347815657316LL;
int zero = 0;
signed char var_10 = (signed char)8;
int var_11 = 1236744764;
signed char var_12 = (signed char)29;
unsigned char var_13 = (unsigned char)193;
signed char var_14 = (signed char)23;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
