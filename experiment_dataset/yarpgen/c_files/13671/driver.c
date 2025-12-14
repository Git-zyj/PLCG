#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9737;
_Bool var_3 = (_Bool)1;
_Bool var_7 = (_Bool)0;
int var_8 = -279878863;
unsigned char var_10 = (unsigned char)26;
_Bool var_11 = (_Bool)0;
long long int var_13 = 8385128632394257080LL;
int zero = 0;
long long int var_18 = -5494294973846838738LL;
unsigned char var_19 = (unsigned char)118;
short var_20 = (short)-30596;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
