#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-75;
unsigned int var_5 = 4053025877U;
signed char var_6 = (signed char)-24;
unsigned short var_7 = (unsigned short)26324;
long long int var_8 = 4912666399562064391LL;
unsigned int var_9 = 3253313521U;
long long int var_15 = 6860612472156419101LL;
int zero = 0;
int var_17 = -1755953135;
_Bool var_18 = (_Bool)1;
int var_19 = 530595044;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
