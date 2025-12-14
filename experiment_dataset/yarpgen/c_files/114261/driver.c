#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1979188820;
unsigned int var_2 = 2089077648U;
unsigned char var_3 = (unsigned char)61;
long long int var_8 = -2274038069223364020LL;
unsigned short var_9 = (unsigned short)47454;
_Bool var_13 = (_Bool)0;
unsigned int var_15 = 3708540850U;
int var_17 = -242128052;
int zero = 0;
unsigned int var_20 = 3231078981U;
unsigned int var_21 = 2606999447U;
short var_22 = (short)21788;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
