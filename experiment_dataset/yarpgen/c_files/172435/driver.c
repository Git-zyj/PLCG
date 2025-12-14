#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4392335732491471868ULL;
_Bool var_3 = (_Bool)0;
_Bool var_8 = (_Bool)0;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)30835;
int var_13 = -550777930;
long long int var_14 = 4033712854418286177LL;
signed char var_16 = (signed char)-97;
int var_19 = -1053499238;
int zero = 0;
unsigned char var_20 = (unsigned char)111;
long long int var_21 = -2580587220035814148LL;
signed char var_22 = (signed char)89;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
