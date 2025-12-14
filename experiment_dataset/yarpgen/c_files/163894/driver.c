#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)121;
_Bool var_3 = (_Bool)0;
unsigned char var_6 = (unsigned char)78;
unsigned short var_10 = (unsigned short)39805;
long long int var_15 = 3495207176515307745LL;
long long int var_16 = 4822087141601072273LL;
int zero = 0;
short var_17 = (short)601;
unsigned short var_18 = (unsigned short)6675;
unsigned long long int var_19 = 2863930692364766970ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
