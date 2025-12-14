#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)0;
_Bool var_6 = (_Bool)0;
unsigned char var_9 = (unsigned char)219;
short var_10 = (short)-811;
long long int var_11 = 3058237150015843095LL;
long long int var_12 = -144775751224230509LL;
long long int var_13 = -183253537370244098LL;
int zero = 0;
short var_17 = (short)-25682;
long long int var_18 = 6994428486747167986LL;
unsigned short var_19 = (unsigned short)24825;
unsigned long long int var_20 = 13631586154312861715ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
