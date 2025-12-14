#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4945753215149567981LL;
unsigned int var_3 = 1435671382U;
signed char var_4 = (signed char)-49;
unsigned long long int var_9 = 14215321600666782495ULL;
unsigned char var_17 = (unsigned char)107;
int zero = 0;
unsigned long long int var_20 = 3217173127912180521ULL;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 3922955127U;
long long int var_23 = -785893028975706454LL;
unsigned char var_24 = (unsigned char)176;
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
