#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)230;
unsigned char var_1 = (unsigned char)210;
long long int var_2 = -6317403408861466572LL;
unsigned char var_3 = (unsigned char)163;
unsigned char var_7 = (unsigned char)26;
long long int var_8 = 313880316154233737LL;
unsigned char var_9 = (unsigned char)34;
long long int var_10 = 5660692821801933622LL;
long long int var_12 = 801819744002492390LL;
long long int var_14 = 5379585355609350103LL;
long long int var_15 = 4451552565880721605LL;
unsigned char var_16 = (unsigned char)93;
unsigned char var_17 = (unsigned char)174;
int zero = 0;
unsigned char var_18 = (unsigned char)22;
long long int var_19 = -2740078840905649865LL;
unsigned char var_20 = (unsigned char)126;
unsigned char var_21 = (unsigned char)158;
unsigned char var_22 = (unsigned char)137;
long long int var_23 = -1804922274536693223LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
