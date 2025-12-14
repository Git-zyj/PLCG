#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9618;
short var_1 = (short)-17248;
long long int var_2 = 9079487619799802091LL;
unsigned char var_4 = (unsigned char)129;
unsigned short var_5 = (unsigned short)32565;
unsigned short var_6 = (unsigned short)23784;
unsigned short var_7 = (unsigned short)13150;
unsigned char var_8 = (unsigned char)1;
long long int var_9 = -4779256665520866705LL;
long long int var_11 = 2585631538796357067LL;
unsigned short var_12 = (unsigned short)31976;
long long int var_13 = -7119586197395551204LL;
int var_14 = 937778181;
unsigned short var_15 = (unsigned short)10965;
short var_16 = (short)21109;
int zero = 0;
unsigned char var_19 = (unsigned char)171;
signed char var_20 = (signed char)89;
short var_21 = (short)-26981;
unsigned char var_22 = (unsigned char)46;
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
