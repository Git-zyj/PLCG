#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 9277464382806715608ULL;
unsigned long long int var_7 = 6440980149298601824ULL;
unsigned long long int var_8 = 13045599940107737366ULL;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)55247;
int zero = 0;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
long long int var_19 = 1659218014967488437LL;
_Bool var_20 = (_Bool)0;
int var_21 = 1454192205;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
