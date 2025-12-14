#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-71;
long long int var_1 = 7239770093461606715LL;
_Bool var_5 = (_Bool)0;
unsigned char var_7 = (unsigned char)21;
signed char var_8 = (signed char)117;
long long int var_9 = 8823633985102449382LL;
int var_10 = 2041113468;
signed char var_14 = (signed char)-84;
unsigned int var_15 = 1243907416U;
int zero = 0;
long long int var_16 = 4746005814925829326LL;
unsigned char var_17 = (unsigned char)165;
signed char var_18 = (signed char)-77;
unsigned short var_19 = (unsigned short)48434;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
