#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15021;
unsigned short var_1 = (unsigned short)64722;
unsigned long long int var_2 = 13479316303910804617ULL;
short var_3 = (short)12007;
unsigned char var_4 = (unsigned char)156;
long long int var_5 = -4970636878219071918LL;
unsigned int var_6 = 1037122277U;
unsigned char var_7 = (unsigned char)12;
long long int var_8 = -8781503793768320178LL;
long long int var_10 = -469053065132355001LL;
int zero = 0;
int var_11 = 443956757;
unsigned short var_12 = (unsigned short)33712;
long long int var_13 = 6376037756215200824LL;
unsigned long long int var_14 = 8995626340461438270ULL;
unsigned int var_15 = 1943556007U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
