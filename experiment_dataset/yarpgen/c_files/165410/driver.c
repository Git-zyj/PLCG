#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 160168070U;
int var_2 = 120382914;
int var_3 = -1072609757;
long long int var_4 = 7784624171660211177LL;
int var_5 = -524891736;
int var_6 = -1531436015;
unsigned char var_7 = (unsigned char)199;
int var_8 = 1400853835;
signed char var_9 = (signed char)126;
unsigned int var_10 = 688965543U;
unsigned char var_12 = (unsigned char)131;
unsigned char var_13 = (unsigned char)96;
int var_14 = 1068831105;
unsigned char var_15 = (unsigned char)89;
signed char var_17 = (signed char)-80;
long long int var_18 = -6243733140219893324LL;
int zero = 0;
unsigned char var_19 = (unsigned char)104;
signed char var_20 = (signed char)-7;
unsigned char var_21 = (unsigned char)118;
int var_22 = 1745328297;
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
