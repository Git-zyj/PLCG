#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1053856749;
short var_1 = (short)-15951;
unsigned char var_2 = (unsigned char)160;
unsigned long long int var_3 = 3508983221141989151ULL;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)31920;
_Bool var_9 = (_Bool)0;
signed char var_11 = (signed char)-21;
unsigned short var_12 = (unsigned short)39099;
unsigned long long int var_13 = 2544765209726074868ULL;
unsigned long long int var_14 = 4235773262278374145ULL;
unsigned short var_17 = (unsigned short)41104;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)91;
unsigned short var_21 = (unsigned short)43052;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
