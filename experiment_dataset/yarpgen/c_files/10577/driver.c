#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)172;
unsigned int var_1 = 3201011317U;
unsigned char var_3 = (unsigned char)158;
signed char var_4 = (signed char)-9;
unsigned long long int var_5 = 8314575286999416760ULL;
unsigned char var_6 = (unsigned char)39;
unsigned char var_9 = (unsigned char)81;
_Bool var_10 = (_Bool)0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 1764488356225534517ULL;
signed char var_16 = (signed char)91;
unsigned char var_18 = (unsigned char)20;
int zero = 0;
unsigned long long int var_20 = 5019328459180741490ULL;
short var_21 = (short)-4890;
long long int var_22 = -7205461318335122420LL;
short var_23 = (short)-5962;
unsigned char var_24 = (unsigned char)117;
void init() {
}

void checksum() {
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
