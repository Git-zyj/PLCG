#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-114;
int var_2 = -1875812482;
long long int var_4 = 3102351291529575088LL;
unsigned long long int var_6 = 11846222874525081039ULL;
unsigned char var_7 = (unsigned char)53;
unsigned int var_8 = 2985140263U;
unsigned long long int var_9 = 13688803651203711519ULL;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_19 = -1455129741339224278LL;
short var_20 = (short)819;
unsigned short var_21 = (unsigned short)26469;
void init() {
}

void checksum() {
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
