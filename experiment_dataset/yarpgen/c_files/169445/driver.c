#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53467;
unsigned int var_2 = 3821390248U;
signed char var_3 = (signed char)28;
unsigned long long int var_5 = 12688595478425286166ULL;
unsigned long long int var_6 = 7567061906844983165ULL;
_Bool var_7 = (_Bool)1;
int var_9 = 50108263;
unsigned int var_10 = 2771051616U;
signed char var_11 = (signed char)-124;
int var_12 = 1369508634;
int zero = 0;
int var_13 = 332851372;
_Bool var_14 = (_Bool)0;
long long int var_15 = -4554812419094510115LL;
unsigned short var_16 = (unsigned short)60647;
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
