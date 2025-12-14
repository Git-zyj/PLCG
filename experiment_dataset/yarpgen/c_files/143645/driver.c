#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3813821378303152238ULL;
long long int var_1 = 3473938256126401824LL;
unsigned long long int var_2 = 13222174875207970766ULL;
long long int var_4 = -1331385495935847607LL;
unsigned short var_5 = (unsigned short)57700;
signed char var_6 = (signed char)-79;
unsigned char var_8 = (unsigned char)224;
unsigned long long int var_9 = 16348600716228491491ULL;
unsigned long long int var_10 = 2016067491134618286ULL;
short var_11 = (short)14034;
_Bool var_12 = (_Bool)1;
int zero = 0;
long long int var_13 = -1374348414467968502LL;
unsigned short var_14 = (unsigned short)42784;
short var_15 = (short)-24830;
int var_16 = 67234896;
unsigned char var_17 = (unsigned char)107;
signed char var_18 = (signed char)28;
unsigned long long int var_19 = 1497263342924357680ULL;
long long int var_20 = 3711788897628148854LL;
long long int var_21 = -1211037939869318691LL;
unsigned long long int var_22 = 7905882679002111076ULL;
_Bool var_23 = (_Bool)1;
int var_24 = 274596078;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
