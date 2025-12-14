#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -723903466;
unsigned char var_2 = (unsigned char)68;
_Bool var_6 = (_Bool)1;
long long int var_7 = 2630395787139200599LL;
unsigned char var_12 = (unsigned char)108;
unsigned long long int var_13 = 14477526438313172785ULL;
long long int var_17 = -4639600415936002178LL;
int zero = 0;
short var_18 = (short)1785;
int var_19 = 2036209443;
long long int var_20 = -7976081155473935215LL;
long long int var_21 = 1645977904643445883LL;
signed char var_22 = (signed char)-12;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
