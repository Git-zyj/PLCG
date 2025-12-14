#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 12252521667383638587ULL;
unsigned long long int var_2 = 495316964761972692ULL;
unsigned short var_4 = (unsigned short)36589;
unsigned short var_6 = (unsigned short)20785;
int var_8 = 422467001;
_Bool var_9 = (_Bool)0;
long long int var_11 = -5271811748242668202LL;
long long int var_12 = 6696349337835587329LL;
long long int var_14 = 2051276347789911795LL;
unsigned long long int var_16 = 8694967745999457868ULL;
int zero = 0;
unsigned long long int var_18 = 9750912193293511910ULL;
signed char var_19 = (signed char)61;
unsigned char var_20 = (unsigned char)170;
_Bool var_21 = (_Bool)0;
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
