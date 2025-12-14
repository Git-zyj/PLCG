#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1738292964421704592LL;
_Bool var_3 = (_Bool)1;
long long int var_6 = -5944122380147904773LL;
long long int var_9 = 3674390591319121110LL;
signed char var_13 = (signed char)-33;
unsigned int var_16 = 3855550576U;
unsigned short var_18 = (unsigned short)36131;
int zero = 0;
signed char var_19 = (signed char)-29;
unsigned short var_20 = (unsigned short)34601;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 4416061806214278536ULL;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
