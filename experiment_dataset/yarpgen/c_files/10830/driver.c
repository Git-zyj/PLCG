#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1071240642903399875LL;
long long int var_6 = 4767321094589566104LL;
unsigned short var_7 = (unsigned short)18062;
int var_9 = -560267300;
long long int var_12 = -347045827715769474LL;
unsigned long long int var_13 = 14184967435570232526ULL;
_Bool var_16 = (_Bool)0;
long long int var_17 = -6129078360484180296LL;
int zero = 0;
unsigned short var_19 = (unsigned short)42201;
short var_20 = (short)856;
long long int var_21 = -3905799483379317982LL;
void init() {
}

void checksum() {
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
