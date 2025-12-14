#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)64;
_Bool var_3 = (_Bool)0;
short var_5 = (short)12649;
short var_6 = (short)7999;
int var_9 = 1228623061;
int var_12 = -1609915088;
int var_15 = 813941675;
int var_17 = -605986883;
unsigned char var_18 = (unsigned char)204;
int zero = 0;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)38579;
long long int var_22 = 2405397278239385895LL;
void init() {
}

void checksum() {
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
