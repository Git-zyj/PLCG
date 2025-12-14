#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20737;
unsigned long long int var_1 = 17109814450629057638ULL;
short var_2 = (short)2159;
unsigned long long int var_7 = 10060066835536871721ULL;
signed char var_9 = (signed char)-125;
unsigned long long int var_10 = 967681504362769656ULL;
unsigned int var_12 = 227230421U;
unsigned short var_14 = (unsigned short)26251;
short var_15 = (short)4872;
short var_16 = (short)3985;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)222;
signed char var_20 = (signed char)95;
unsigned long long int var_21 = 14107853123128186399ULL;
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
