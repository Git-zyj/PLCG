#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)104;
unsigned long long int var_1 = 5049327513078745482ULL;
unsigned char var_4 = (unsigned char)235;
short var_6 = (short)10828;
signed char var_7 = (signed char)-15;
unsigned char var_9 = (unsigned char)15;
signed char var_10 = (signed char)-39;
long long int var_11 = -6344970895030152520LL;
unsigned short var_12 = (unsigned short)56514;
signed char var_14 = (signed char)-109;
unsigned char var_15 = (unsigned char)155;
unsigned long long int var_16 = 10366200042544834581ULL;
long long int var_17 = -4550278574518906056LL;
int zero = 0;
long long int var_18 = -1215162593208120806LL;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)136;
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
