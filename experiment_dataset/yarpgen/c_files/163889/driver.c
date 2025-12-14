#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-66;
long long int var_2 = 7680465594207119985LL;
int var_3 = 9617202;
int var_4 = 1793477492;
unsigned long long int var_5 = 2556650834206339378ULL;
unsigned long long int var_6 = 5745565243494776357ULL;
_Bool var_8 = (_Bool)1;
int var_9 = -342127200;
signed char var_12 = (signed char)-61;
int var_13 = -1836758422;
int var_14 = 1742696578;
int zero = 0;
unsigned long long int var_17 = 6001253685548208753ULL;
int var_18 = 1363123449;
unsigned long long int var_19 = 7229439084920265571ULL;
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
