#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 444781206259416041ULL;
int var_2 = 1072873212;
unsigned short var_3 = (unsigned short)37415;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)22627;
long long int var_7 = -1226319902844914065LL;
int var_9 = 1235709234;
long long int var_10 = -2964283139491638097LL;
unsigned short var_11 = (unsigned short)478;
unsigned long long int var_12 = 12129276040758193532ULL;
signed char var_13 = (signed char)-89;
_Bool var_14 = (_Bool)0;
unsigned long long int var_16 = 7512563548936949828ULL;
int zero = 0;
short var_19 = (short)27753;
signed char var_20 = (signed char)59;
int var_21 = -139964488;
signed char var_22 = (signed char)93;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
