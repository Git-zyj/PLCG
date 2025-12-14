#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1174323431;
unsigned char var_2 = (unsigned char)40;
unsigned char var_3 = (unsigned char)244;
unsigned long long int var_9 = 9075123455190048329ULL;
unsigned char var_12 = (unsigned char)206;
int zero = 0;
int var_17 = 1062185050;
unsigned int var_18 = 3961056121U;
unsigned int var_19 = 3390196777U;
unsigned long long int var_20 = 11432585324050254987ULL;
signed char var_21 = (signed char)-72;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
