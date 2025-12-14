#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8199;
signed char var_2 = (signed char)17;
unsigned int var_4 = 4068023677U;
_Bool var_5 = (_Bool)0;
unsigned char var_8 = (unsigned char)170;
long long int var_9 = 8316953653556783359LL;
unsigned char var_10 = (unsigned char)220;
long long int var_11 = 1007592407799126986LL;
unsigned short var_13 = (unsigned short)41005;
int zero = 0;
int var_18 = -106272355;
unsigned int var_19 = 12511715U;
short var_20 = (short)28770;
unsigned char var_21 = (unsigned char)164;
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
