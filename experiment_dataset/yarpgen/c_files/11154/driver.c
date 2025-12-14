#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38630;
signed char var_1 = (signed char)44;
unsigned char var_2 = (unsigned char)188;
_Bool var_5 = (_Bool)1;
short var_6 = (short)19549;
unsigned long long int var_7 = 17233153045722405681ULL;
int var_8 = 1527775726;
int var_10 = -1694571009;
unsigned long long int var_11 = 1154463208308877029ULL;
int zero = 0;
long long int var_13 = 6754348001144911342LL;
_Bool var_14 = (_Bool)0;
int var_15 = 1369327659;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
