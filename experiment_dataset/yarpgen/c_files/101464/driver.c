#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)92;
long long int var_2 = -392698567825200439LL;
unsigned short var_3 = (unsigned short)30385;
unsigned int var_4 = 1731853217U;
int var_5 = 534617245;
unsigned int var_6 = 2319375322U;
unsigned long long int var_8 = 3434505372747116886ULL;
unsigned char var_9 = (unsigned char)110;
short var_10 = (short)4526;
int zero = 0;
unsigned short var_11 = (unsigned short)40134;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 272385855246397986ULL;
unsigned int var_14 = 1036030936U;
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
