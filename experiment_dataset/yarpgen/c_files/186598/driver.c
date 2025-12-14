#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1588374868;
unsigned long long int var_4 = 4861422993499369387ULL;
unsigned long long int var_5 = 10591569125143366034ULL;
long long int var_6 = -1314877655353892661LL;
unsigned int var_7 = 1444599410U;
int var_9 = -124152719;
unsigned short var_11 = (unsigned short)4754;
long long int var_12 = 5591385019320690440LL;
int var_13 = 1251994871;
int zero = 0;
long long int var_15 = -3413669921320897178LL;
short var_16 = (short)30631;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
