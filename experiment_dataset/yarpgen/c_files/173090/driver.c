#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 962277228;
int var_5 = 1624657265;
unsigned int var_6 = 2095220116U;
unsigned char var_7 = (unsigned char)254;
_Bool var_9 = (_Bool)0;
_Bool var_11 = (_Bool)0;
unsigned char var_13 = (unsigned char)104;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-11;
int zero = 0;
long long int var_19 = 2107194400741215121LL;
unsigned short var_20 = (unsigned short)53164;
long long int var_21 = 7898335609524006630LL;
unsigned short var_22 = (unsigned short)13627;
_Bool var_23 = (_Bool)1;
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
