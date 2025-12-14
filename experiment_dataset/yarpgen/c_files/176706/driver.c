#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2564144432U;
unsigned int var_3 = 2731794426U;
long long int var_7 = -9123122320962624088LL;
int var_9 = 1421915492;
_Bool var_12 = (_Bool)1;
int zero = 0;
short var_13 = (short)-11358;
unsigned int var_14 = 2154439242U;
unsigned int var_15 = 3800121370U;
unsigned long long int var_16 = 4210097833269504609ULL;
unsigned short var_17 = (unsigned short)64446;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
