#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)108;
int var_2 = -1988894094;
short var_3 = (short)7120;
long long int var_5 = -8684006975742051318LL;
unsigned int var_6 = 2028487000U;
long long int var_8 = 424539578995617449LL;
int var_9 = -167463686;
unsigned int var_10 = 1314775888U;
int zero = 0;
unsigned int var_11 = 3083525957U;
long long int var_12 = -8779809497731250608LL;
signed char var_13 = (signed char)-103;
unsigned long long int var_14 = 16446329707097355978ULL;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
