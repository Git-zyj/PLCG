#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4255829504U;
unsigned int var_5 = 1698268942U;
_Bool var_7 = (_Bool)1;
unsigned int var_10 = 4026055983U;
unsigned char var_12 = (unsigned char)236;
long long int var_14 = -3562413797549683104LL;
unsigned short var_15 = (unsigned short)3146;
int zero = 0;
unsigned long long int var_17 = 8020866531675404057ULL;
unsigned int var_18 = 3903140234U;
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
