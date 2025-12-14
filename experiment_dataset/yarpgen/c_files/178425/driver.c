#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-35;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)-124;
unsigned short var_7 = (unsigned short)44791;
unsigned long long int var_9 = 13644989382000298732ULL;
unsigned int var_12 = 4071704161U;
int var_15 = 461885416;
long long int var_17 = -6701927140067035561LL;
long long int var_19 = 5984491720281065804LL;
int zero = 0;
int var_20 = -989330369;
signed char var_21 = (signed char)60;
unsigned char var_22 = (unsigned char)54;
void init() {
}

void checksum() {
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
