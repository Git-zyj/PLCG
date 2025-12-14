#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16825914199762167602ULL;
unsigned long long int var_1 = 399387206298351288ULL;
short var_2 = (short)10990;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 6069768078909332625ULL;
unsigned long long int var_6 = 15699973329703947013ULL;
int zero = 0;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 12915595811410234259ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
