#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_2 = 8801890142527227598ULL;
long long int var_6 = 572703968725666678LL;
long long int var_11 = -4294343874254744311LL;
unsigned int var_13 = 214134619U;
long long int var_14 = -1848157303310240466LL;
unsigned long long int var_18 = 8179813886290844892ULL;
int zero = 0;
unsigned long long int var_19 = 10732313631776836574ULL;
signed char var_20 = (signed char)-5;
long long int var_21 = -711346315339683250LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
