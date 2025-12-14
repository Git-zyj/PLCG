#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-90;
long long int var_5 = 5486978958775405787LL;
_Bool var_6 = (_Bool)1;
unsigned short var_11 = (unsigned short)44091;
unsigned long long int var_13 = 3699584928100429208ULL;
unsigned char var_15 = (unsigned char)81;
long long int var_16 = 3831131550598681109LL;
int zero = 0;
signed char var_17 = (signed char)-127;
unsigned int var_18 = 3407205406U;
_Bool var_19 = (_Bool)1;
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
