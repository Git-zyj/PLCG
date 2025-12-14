#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8839151809046360967LL;
short var_1 = (short)-1442;
unsigned short var_2 = (unsigned short)13467;
long long int var_3 = 5653681842761060285LL;
long long int var_4 = 5996187774721118046LL;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)3570;
short var_9 = (short)-18724;
signed char var_10 = (signed char)110;
unsigned char var_11 = (unsigned char)62;
int zero = 0;
long long int var_12 = -5963537388634129301LL;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 6442143768749361666ULL;
void init() {
}

void checksum() {
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
