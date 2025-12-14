#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4439541989277893038LL;
long long int var_1 = 4516581681430986414LL;
unsigned short var_3 = (unsigned short)42178;
long long int var_8 = 4655221664246039892LL;
unsigned int var_9 = 3416069883U;
int zero = 0;
unsigned char var_11 = (unsigned char)244;
unsigned long long int var_12 = 745637780581932061ULL;
unsigned char var_13 = (unsigned char)152;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
