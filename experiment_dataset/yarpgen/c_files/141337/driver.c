#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62437;
_Bool var_1 = (_Bool)0;
unsigned int var_3 = 503910554U;
long long int var_4 = -8903017777695354882LL;
signed char var_5 = (signed char)109;
unsigned long long int var_6 = 17276913486814874193ULL;
unsigned short var_7 = (unsigned short)39823;
long long int var_10 = 5304487856611791364LL;
int zero = 0;
unsigned char var_12 = (unsigned char)209;
signed char var_13 = (signed char)-2;
int var_14 = -1986709010;
long long int var_15 = -7487685075590050184LL;
long long int var_16 = 6043287062723881244LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
