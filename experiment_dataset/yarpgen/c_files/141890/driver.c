#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)56;
unsigned int var_5 = 3601341153U;
unsigned int var_6 = 2384708628U;
long long int var_8 = 7508834998683708903LL;
int var_10 = -1522019787;
unsigned int var_11 = 1803964961U;
unsigned long long int var_12 = 13338067930874157654ULL;
int zero = 0;
unsigned long long int var_15 = 5597904888395499105ULL;
unsigned short var_16 = (unsigned short)31642;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 3419998282U;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
