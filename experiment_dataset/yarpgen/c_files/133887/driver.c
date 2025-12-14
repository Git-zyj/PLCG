#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3895481082U;
unsigned int var_7 = 3578753220U;
unsigned int var_8 = 3450056407U;
unsigned int var_10 = 4009446896U;
unsigned long long int var_11 = 3171598839838415701ULL;
int var_12 = 1423131480;
unsigned long long int var_15 = 11965845287706252882ULL;
int zero = 0;
signed char var_19 = (signed char)27;
unsigned int var_20 = 3207150533U;
signed char var_21 = (signed char)-66;
unsigned long long int var_22 = 2869425207826207787ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
