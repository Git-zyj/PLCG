#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_3 = 2396733154U;
unsigned long long int var_5 = 9395210378100685982ULL;
unsigned long long int var_7 = 16619974114952399212ULL;
unsigned short var_9 = (unsigned short)15395;
long long int var_10 = -5453163034844099875LL;
unsigned char var_11 = (unsigned char)65;
long long int var_13 = -198736432094292959LL;
unsigned short var_18 = (unsigned short)49651;
int zero = 0;
unsigned char var_19 = (unsigned char)105;
signed char var_20 = (signed char)-29;
signed char var_21 = (signed char)-97;
unsigned short var_22 = (unsigned short)2846;
unsigned int var_23 = 3105619714U;
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
