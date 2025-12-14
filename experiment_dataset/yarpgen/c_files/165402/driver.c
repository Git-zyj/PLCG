#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 438019072;
unsigned long long int var_1 = 296201370634258788ULL;
short var_2 = (short)7103;
short var_3 = (short)13457;
unsigned long long int var_4 = 2278871564568374868ULL;
unsigned int var_5 = 3212385502U;
unsigned char var_6 = (unsigned char)190;
short var_7 = (short)-4851;
unsigned short var_9 = (unsigned short)35409;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
unsigned short var_13 = (unsigned short)52488;
long long int var_15 = 178279859155514790LL;
unsigned short var_16 = (unsigned short)60178;
int zero = 0;
unsigned char var_19 = (unsigned char)15;
int var_20 = -488666080;
_Bool var_21 = (_Bool)0;
long long int var_22 = -6864097836016088801LL;
int var_23 = -1801032614;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
