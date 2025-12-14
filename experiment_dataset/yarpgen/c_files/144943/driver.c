#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)114;
long long int var_4 = 6425681571793420536LL;
signed char var_6 = (signed char)-66;
unsigned int var_7 = 3317381804U;
unsigned int var_8 = 29996438U;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_11 = (signed char)-37;
int var_12 = -1571887353;
signed char var_13 = (signed char)-39;
void init() {
}

void checksum() {
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
