#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1239505271U;
int var_2 = -133569169;
_Bool var_3 = (_Bool)1;
unsigned short var_6 = (unsigned short)7495;
int var_9 = -496018724;
unsigned long long int var_11 = 8332721094223285849ULL;
int var_14 = 83685980;
int zero = 0;
unsigned int var_15 = 474312348U;
long long int var_16 = -1107878082570431538LL;
unsigned long long int var_17 = 2106443836856034603ULL;
void init() {
}

void checksum() {
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
