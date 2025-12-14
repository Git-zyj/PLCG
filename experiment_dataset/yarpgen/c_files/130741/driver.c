#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1232444711U;
_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)35754;
long long int var_6 = -4584380250242498740LL;
signed char var_9 = (signed char)-77;
int zero = 0;
signed char var_10 = (signed char)-7;
signed char var_11 = (signed char)98;
unsigned long long int var_12 = 3388108398746580828ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
