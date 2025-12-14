#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-44;
unsigned int var_3 = 2895572348U;
signed char var_4 = (signed char)1;
unsigned int var_5 = 3216223726U;
unsigned short var_6 = (unsigned short)40202;
long long int var_7 = -4578281360352613553LL;
signed char var_8 = (signed char)-89;
unsigned long long int var_10 = 13203854206552403298ULL;
long long int var_11 = 6671189511426192287LL;
unsigned int var_12 = 2377138709U;
int zero = 0;
long long int var_13 = -735470950145403296LL;
unsigned int var_14 = 4060520700U;
long long int var_15 = -6789530664288301839LL;
unsigned int var_16 = 1926261136U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
