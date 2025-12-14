#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9539554956759471390ULL;
unsigned char var_2 = (unsigned char)182;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)4;
int var_9 = -1725298457;
int var_10 = 1480029353;
unsigned short var_12 = (unsigned short)29778;
long long int var_18 = 7130476494830960582LL;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)930;
short var_22 = (short)-27539;
unsigned short var_23 = (unsigned short)22327;
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
