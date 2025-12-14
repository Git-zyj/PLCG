#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-42;
long long int var_2 = 5093604216530913444LL;
signed char var_4 = (signed char)-12;
_Bool var_6 = (_Bool)0;
long long int var_7 = 3911448324240008848LL;
unsigned char var_8 = (unsigned char)71;
unsigned long long int var_14 = 17754276139143517543ULL;
unsigned char var_17 = (unsigned char)183;
signed char var_18 = (signed char)-66;
unsigned char var_19 = (unsigned char)125;
int zero = 0;
unsigned char var_20 = (unsigned char)214;
signed char var_21 = (signed char)-93;
short var_22 = (short)15137;
long long int var_23 = -5439268030422330844LL;
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
