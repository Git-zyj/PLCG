#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3489135305061718427LL;
unsigned char var_3 = (unsigned char)5;
signed char var_6 = (signed char)-90;
unsigned int var_7 = 1455183397U;
unsigned long long int var_13 = 6222561341074697022ULL;
long long int var_14 = -8063396450353741156LL;
_Bool var_17 = (_Bool)0;
int zero = 0;
long long int var_18 = -1987093861837168119LL;
short var_19 = (short)-16783;
unsigned long long int var_20 = 1077406491130227561ULL;
signed char var_21 = (signed char)13;
signed char var_22 = (signed char)-2;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
