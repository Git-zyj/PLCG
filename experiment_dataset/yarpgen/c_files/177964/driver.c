#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1359859308U;
unsigned long long int var_1 = 3451640066112315466ULL;
long long int var_2 = 3284160150281566824LL;
short var_3 = (short)11217;
unsigned short var_8 = (unsigned short)22529;
unsigned short var_10 = (unsigned short)25117;
unsigned long long int var_12 = 11566152081610477959ULL;
unsigned short var_14 = (unsigned short)36051;
unsigned char var_17 = (unsigned char)201;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 3907889220602383295ULL;
unsigned long long int var_21 = 14553657095444364917ULL;
unsigned long long int var_22 = 186649265632874316ULL;
unsigned long long int var_23 = 10330207350588003383ULL;
int var_24 = 1544470872;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
