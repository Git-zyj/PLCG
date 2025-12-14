#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21179;
unsigned short var_1 = (unsigned short)50907;
int var_2 = -1629829652;
short var_4 = (short)-28440;
unsigned long long int var_5 = 10490280242911462570ULL;
unsigned char var_6 = (unsigned char)239;
short var_7 = (short)12960;
unsigned long long int var_8 = 9010001327866693426ULL;
_Bool var_9 = (_Bool)1;
int var_10 = 1562997416;
short var_11 = (short)13674;
int zero = 0;
int var_13 = 1308945417;
unsigned long long int var_14 = 3990501477240252195ULL;
signed char var_15 = (signed char)-20;
long long int var_16 = -5344351565602722279LL;
unsigned long long int var_17 = 10332596031213189606ULL;
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
