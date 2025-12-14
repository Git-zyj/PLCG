#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 719068991U;
unsigned int var_3 = 4141482289U;
unsigned short var_7 = (unsigned short)13226;
unsigned int var_9 = 4263037567U;
signed char var_10 = (signed char)110;
int var_11 = -212582173;
signed char var_13 = (signed char)-46;
long long int var_16 = 4744355969833904528LL;
int zero = 0;
unsigned short var_17 = (unsigned short)54437;
unsigned long long int var_18 = 15640266813025351138ULL;
unsigned short var_19 = (unsigned short)2296;
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
