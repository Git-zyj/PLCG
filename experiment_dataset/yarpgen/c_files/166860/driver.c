#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)45;
unsigned long long int var_3 = 1066002045978157146ULL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_8 = 3195619028864611108ULL;
long long int var_10 = 4263631231190847874LL;
_Bool var_11 = (_Bool)0;
unsigned long long int var_14 = 7025950718660780917ULL;
int var_16 = -1555449828;
int zero = 0;
unsigned long long int var_18 = 13342671826854563408ULL;
int var_19 = -1404481123;
unsigned short var_20 = (unsigned short)10619;
signed char var_21 = (signed char)-23;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
