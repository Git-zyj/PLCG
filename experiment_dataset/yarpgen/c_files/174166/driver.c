#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-5851;
unsigned long long int var_2 = 13514174661119227885ULL;
signed char var_3 = (signed char)-118;
short var_4 = (short)-28145;
unsigned int var_5 = 767667578U;
signed char var_6 = (signed char)39;
int zero = 0;
signed char var_12 = (signed char)-74;
unsigned char var_13 = (unsigned char)132;
signed char var_14 = (signed char)-11;
signed char var_15 = (signed char)19;
signed char var_16 = (signed char)89;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
