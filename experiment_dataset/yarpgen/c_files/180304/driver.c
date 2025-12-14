#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-10211;
_Bool var_3 = (_Bool)0;
unsigned short var_8 = (unsigned short)14573;
unsigned int var_9 = 554647538U;
short var_10 = (short)-6617;
short var_13 = (short)19074;
unsigned long long int var_16 = 8101098753187036777ULL;
int var_18 = -1398011325;
int zero = 0;
unsigned int var_20 = 3467020660U;
long long int var_21 = -5160825467282080780LL;
unsigned long long int var_22 = 1646399475531433526ULL;
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
