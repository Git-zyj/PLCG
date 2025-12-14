#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 910726816;
int var_3 = -915930296;
unsigned long long int var_11 = 4215595916147012631ULL;
_Bool var_12 = (_Bool)0;
unsigned char var_14 = (unsigned char)89;
unsigned int var_16 = 2806850868U;
unsigned int var_17 = 2886738612U;
int zero = 0;
unsigned char var_20 = (unsigned char)10;
signed char var_21 = (signed char)57;
unsigned char var_22 = (unsigned char)30;
unsigned short var_23 = (unsigned short)57155;
unsigned long long int var_24 = 12320101934856410958ULL;
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
