#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1810735961U;
short var_1 = (short)18240;
unsigned int var_4 = 3599580744U;
signed char var_8 = (signed char)-28;
int var_9 = 1428082766;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
int var_12 = 1874240277;
signed char var_13 = (signed char)46;
int zero = 0;
int var_14 = -394624288;
signed char var_15 = (signed char)127;
long long int var_16 = 4719589342926759888LL;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
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
