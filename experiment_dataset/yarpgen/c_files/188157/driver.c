#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -149758325;
_Bool var_2 = (_Bool)0;
unsigned long long int var_4 = 12321982927391156946ULL;
short var_6 = (short)3787;
unsigned short var_8 = (unsigned short)27656;
unsigned long long int var_9 = 11422558207249320688ULL;
int var_10 = 67753567;
unsigned short var_11 = (unsigned short)57080;
int var_12 = -2124329138;
signed char var_13 = (signed char)85;
short var_14 = (short)-977;
int zero = 0;
signed char var_18 = (signed char)-17;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 9268745780557263158ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
