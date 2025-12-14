#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)54;
unsigned int var_2 = 584751364U;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 2232288507U;
unsigned short var_6 = (unsigned short)40505;
unsigned long long int var_7 = 17290557892510211197ULL;
int zero = 0;
long long int var_10 = 8207926166811977743LL;
unsigned int var_11 = 3122089574U;
unsigned long long int var_12 = 5520090821523321844ULL;
signed char var_13 = (signed char)-48;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
