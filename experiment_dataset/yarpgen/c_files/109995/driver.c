#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5862362836476440688LL;
unsigned int var_2 = 1117114630U;
unsigned int var_3 = 2429966946U;
unsigned short var_4 = (unsigned short)11462;
_Bool var_7 = (_Bool)0;
long long int var_8 = 3960657300169861452LL;
unsigned short var_10 = (unsigned short)32350;
long long int var_12 = 4867503744194405278LL;
long long int var_13 = 2979469183194486875LL;
int var_14 = 778914662;
signed char var_15 = (signed char)-18;
unsigned int var_17 = 2090774945U;
unsigned long long int var_18 = 11621028931302077261ULL;
int zero = 0;
short var_19 = (short)-18647;
int var_20 = 1146204719;
void init() {
}

void checksum() {
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
