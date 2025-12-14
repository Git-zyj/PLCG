#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)46549;
unsigned char var_3 = (unsigned char)115;
_Bool var_5 = (_Bool)0;
long long int var_10 = 4547317722773412694LL;
unsigned long long int var_11 = 12409010803216195700ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)10294;
int var_14 = 1786427145;
long long int var_15 = 3008214434264792699LL;
int var_16 = -429001569;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
