#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2393127757263416859LL;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 3088174028U;
unsigned char var_4 = (unsigned char)193;
long long int var_5 = 7973678277802783515LL;
short var_8 = (short)-25785;
unsigned short var_9 = (unsigned short)20427;
unsigned short var_10 = (unsigned short)34021;
unsigned char var_12 = (unsigned char)71;
long long int var_13 = -2136679399357470156LL;
int zero = 0;
_Bool var_14 = (_Bool)1;
int var_15 = 1045235547;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
