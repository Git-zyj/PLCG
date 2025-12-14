#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18427668766711208434ULL;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)176;
unsigned char var_3 = (unsigned char)226;
unsigned char var_5 = (unsigned char)76;
long long int var_6 = -3178549031687998554LL;
_Bool var_7 = (_Bool)1;
signed char var_10 = (signed char)-92;
int zero = 0;
_Bool var_11 = (_Bool)1;
long long int var_12 = 6337147952606580545LL;
signed char var_13 = (signed char)4;
unsigned int var_14 = 3442129923U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
