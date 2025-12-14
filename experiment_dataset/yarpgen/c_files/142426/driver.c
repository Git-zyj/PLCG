#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)62;
long long int var_3 = -6413951814860013196LL;
long long int var_4 = 8739389079579076228LL;
unsigned int var_6 = 3055392243U;
long long int var_8 = 7104349419981023520LL;
unsigned long long int var_9 = 1393423921833545952ULL;
signed char var_10 = (signed char)-104;
unsigned int var_12 = 450781406U;
int zero = 0;
signed char var_14 = (signed char)-26;
int var_15 = -484138641;
long long int var_16 = 1303952578616013355LL;
signed char var_17 = (signed char)17;
signed char var_18 = (signed char)120;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
