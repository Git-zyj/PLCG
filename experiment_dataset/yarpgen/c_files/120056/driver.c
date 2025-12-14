#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-117;
unsigned long long int var_1 = 11621749256756222391ULL;
int var_2 = 367135423;
unsigned char var_4 = (unsigned char)188;
signed char var_6 = (signed char)54;
long long int var_7 = 7591734852831978290LL;
unsigned long long int var_8 = 16735204237052087131ULL;
signed char var_11 = (signed char)11;
unsigned long long int var_14 = 204303498664874694ULL;
int zero = 0;
signed char var_20 = (signed char)46;
int var_21 = 2035667577;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)36434;
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
