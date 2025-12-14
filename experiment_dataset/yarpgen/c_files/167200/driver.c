#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1123058079402034135LL;
unsigned short var_2 = (unsigned short)59870;
long long int var_3 = -2813985375737837669LL;
unsigned long long int var_7 = 7003586702063142856ULL;
short var_8 = (short)-3876;
_Bool var_17 = (_Bool)0;
long long int var_19 = 4446279118517538978LL;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)29;
unsigned short var_22 = (unsigned short)11382;
void init() {
}

void checksum() {
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
