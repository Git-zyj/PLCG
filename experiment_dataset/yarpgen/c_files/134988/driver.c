#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6078960551476521064LL;
unsigned int var_2 = 2029183417U;
int var_3 = 1176202134;
unsigned long long int var_4 = 5370858734882228428ULL;
signed char var_5 = (signed char)96;
signed char var_6 = (signed char)-55;
unsigned short var_7 = (unsigned short)32832;
unsigned int var_8 = 3295132928U;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned long long int var_10 = 14126897588699887233ULL;
long long int var_11 = 7880233928924938520LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
