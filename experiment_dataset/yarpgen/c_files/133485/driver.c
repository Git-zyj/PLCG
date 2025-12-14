#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7560634927863665287ULL;
unsigned long long int var_2 = 6808948441786558496ULL;
long long int var_3 = 4101565820600421868LL;
_Bool var_5 = (_Bool)1;
unsigned int var_9 = 2571899558U;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-77;
unsigned long long int var_12 = 11800083986614497936ULL;
long long int var_13 = 7103583042736041544LL;
unsigned long long int var_14 = 12974580561259073546ULL;
int zero = 0;
long long int var_20 = 3322331051335894624LL;
unsigned short var_21 = (unsigned short)29920;
short var_22 = (short)-9714;
unsigned short var_23 = (unsigned short)61833;
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
