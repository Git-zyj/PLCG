#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8745025032829863437ULL;
int var_1 = 804214965;
unsigned int var_3 = 3560377963U;
unsigned long long int var_4 = 13706812356999973949ULL;
_Bool var_8 = (_Bool)0;
int var_11 = -1499832730;
unsigned short var_12 = (unsigned short)32462;
int var_13 = -1152983905;
unsigned long long int var_14 = 3779344479466476832ULL;
int zero = 0;
unsigned int var_16 = 3409442380U;
unsigned long long int var_17 = 14066064007988236073ULL;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 4223636591U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
