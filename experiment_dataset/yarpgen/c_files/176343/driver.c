#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -327366913;
short var_2 = (short)11014;
unsigned short var_3 = (unsigned short)8302;
int var_5 = -1632165034;
short var_6 = (short)-155;
unsigned int var_9 = 571808122U;
signed char var_10 = (signed char)-23;
signed char var_11 = (signed char)-74;
unsigned long long int var_12 = 11823576361963588871ULL;
short var_15 = (short)-31716;
unsigned short var_16 = (unsigned short)52848;
unsigned long long int var_17 = 6668652046376333299ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)44195;
short var_19 = (short)1816;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
