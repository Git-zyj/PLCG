#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)149;
_Bool var_2 = (_Bool)1;
long long int var_5 = 1987111201543996776LL;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
unsigned char var_13 = (unsigned char)92;
long long int var_17 = -2489672867150385501LL;
unsigned int var_18 = 4182195940U;
int zero = 0;
long long int var_20 = 1929062823964514677LL;
unsigned short var_21 = (unsigned short)39697;
_Bool var_22 = (_Bool)0;
int var_23 = -1132458951;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
