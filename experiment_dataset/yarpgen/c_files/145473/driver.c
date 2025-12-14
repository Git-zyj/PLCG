#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)50;
_Bool var_2 = (_Bool)0;
signed char var_4 = (signed char)117;
long long int var_5 = -2515050700591622756LL;
unsigned char var_6 = (unsigned char)60;
unsigned char var_7 = (unsigned char)74;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)182;
_Bool var_12 = (_Bool)0;
int var_13 = -429677756;
unsigned char var_14 = (unsigned char)166;
long long int var_15 = 6250217453322014503LL;
int zero = 0;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-91;
signed char var_20 = (signed char)-44;
_Bool var_21 = (_Bool)0;
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
