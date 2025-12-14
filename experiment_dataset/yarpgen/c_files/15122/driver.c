#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50065;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 2493239152693661319ULL;
int var_4 = 377606017;
int var_6 = -668734864;
short var_7 = (short)8294;
int var_8 = 1522675142;
unsigned short var_10 = (unsigned short)28699;
int var_15 = 1958657114;
unsigned int var_16 = 3064125842U;
int zero = 0;
unsigned long long int var_17 = 9296972347226975024ULL;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-27101;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
