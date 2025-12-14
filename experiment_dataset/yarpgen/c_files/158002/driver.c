#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2552298970864915826LL;
_Bool var_2 = (_Bool)1;
short var_4 = (short)-129;
unsigned char var_9 = (unsigned char)217;
_Bool var_11 = (_Bool)0;
unsigned short var_13 = (unsigned short)22816;
int zero = 0;
short var_16 = (short)31322;
long long int var_17 = 2650228354481754536LL;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
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
