#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_6 = 7536835382469362506LL;
unsigned char var_7 = (unsigned char)208;
signed char var_10 = (signed char)-25;
signed char var_12 = (signed char)51;
_Bool var_14 = (_Bool)0;
long long int var_15 = -1139978417590915815LL;
unsigned char var_18 = (unsigned char)105;
long long int var_19 = -3365089027891839880LL;
int zero = 0;
unsigned short var_20 = (unsigned short)16507;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 260495153U;
long long int var_23 = -8029705788488774001LL;
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
