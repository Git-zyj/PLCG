#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -7686609444168791104LL;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)52302;
long long int var_13 = 7186709631016874863LL;
unsigned char var_16 = (unsigned char)203;
unsigned char var_17 = (unsigned char)183;
int zero = 0;
unsigned short var_19 = (unsigned short)13468;
unsigned int var_20 = 1694127419U;
unsigned short var_21 = (unsigned short)54790;
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
