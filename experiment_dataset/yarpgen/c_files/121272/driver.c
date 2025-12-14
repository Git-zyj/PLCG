#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -80352699660178235LL;
int var_3 = -1728811933;
unsigned long long int var_4 = 7982036227517073910ULL;
signed char var_5 = (signed char)-73;
unsigned char var_7 = (unsigned char)181;
unsigned short var_8 = (unsigned short)6457;
unsigned long long int var_9 = 5189766162890128076ULL;
signed char var_10 = (signed char)74;
signed char var_11 = (signed char)-47;
_Bool var_14 = (_Bool)1;
long long int var_15 = 3768048800025326260LL;
int zero = 0;
int var_16 = -1847849882;
unsigned short var_17 = (unsigned short)15051;
_Bool var_18 = (_Bool)0;
int var_19 = -103457760;
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
