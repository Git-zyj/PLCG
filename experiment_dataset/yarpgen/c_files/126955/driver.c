#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)16;
unsigned short var_1 = (unsigned short)50083;
unsigned short var_2 = (unsigned short)32917;
long long int var_3 = -8212384536125468153LL;
unsigned char var_5 = (unsigned char)7;
unsigned char var_6 = (unsigned char)165;
long long int var_7 = 7507065695423074146LL;
signed char var_9 = (signed char)-66;
unsigned short var_14 = (unsigned short)21009;
_Bool var_15 = (_Bool)0;
int var_18 = 805858895;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)71;
signed char var_22 = (signed char)76;
unsigned char var_23 = (unsigned char)110;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
