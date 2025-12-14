#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53659;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)54021;
unsigned long long int var_4 = 17094367536449109220ULL;
_Bool var_5 = (_Bool)0;
int var_6 = -139780728;
signed char var_8 = (signed char)-93;
int var_10 = -1706681564;
unsigned long long int var_11 = 12181977190902679349ULL;
unsigned char var_12 = (unsigned char)77;
int zero = 0;
unsigned long long int var_13 = 4960688357714239196ULL;
long long int var_14 = -8613878422252601304LL;
unsigned long long int var_15 = 2384533829990100547ULL;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
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
