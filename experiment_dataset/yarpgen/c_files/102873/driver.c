#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16850;
unsigned long long int var_1 = 7920054678526294772ULL;
unsigned long long int var_4 = 1144728194404266702ULL;
unsigned long long int var_5 = 7251259922261059055ULL;
unsigned short var_6 = (unsigned short)41051;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)1;
int var_18 = -1384066441;
int zero = 0;
unsigned short var_20 = (unsigned short)8459;
int var_21 = -1980044430;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
