#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13992633234283307847ULL;
unsigned short var_1 = (unsigned short)508;
signed char var_3 = (signed char)-7;
unsigned long long int var_5 = 2771589576895791791ULL;
unsigned long long int var_8 = 17222823124450725753ULL;
unsigned long long int var_9 = 17290334962981276606ULL;
int var_11 = 933231821;
unsigned short var_12 = (unsigned short)7773;
unsigned short var_13 = (unsigned short)60226;
_Bool var_14 = (_Bool)1;
unsigned long long int var_17 = 7303222161823234003ULL;
int zero = 0;
int var_19 = 1585455353;
unsigned short var_20 = (unsigned short)64105;
unsigned long long int var_21 = 13833603921993177129ULL;
unsigned long long int var_22 = 11599986364813920148ULL;
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
