#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 288334722U;
unsigned char var_1 = (unsigned char)78;
unsigned short var_2 = (unsigned short)417;
long long int var_3 = 5881471231181478819LL;
long long int var_5 = -694121341684253327LL;
unsigned short var_8 = (unsigned short)14568;
unsigned int var_9 = 1874273931U;
short var_10 = (short)-27743;
unsigned int var_11 = 2154164983U;
int var_12 = 559647322;
unsigned short var_13 = (unsigned short)20229;
short var_15 = (short)19543;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)18791;
unsigned short var_19 = (unsigned short)4340;
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
