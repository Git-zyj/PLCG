#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-110;
unsigned char var_4 = (unsigned char)192;
int var_7 = 1065661291;
unsigned long long int var_10 = 4399162212119611192ULL;
unsigned short var_11 = (unsigned short)41698;
_Bool var_16 = (_Bool)1;
unsigned short var_18 = (unsigned short)52543;
int zero = 0;
unsigned long long int var_19 = 8958165371720667099ULL;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-28;
_Bool var_22 = (_Bool)1;
short var_23 = (short)5093;
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
