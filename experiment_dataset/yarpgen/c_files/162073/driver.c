#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 1905689264229447585ULL;
long long int var_8 = -1236657912638394738LL;
int var_9 = -389995533;
long long int var_10 = -8953480356538461019LL;
short var_11 = (short)-10320;
unsigned long long int var_13 = 4409089485401482083ULL;
signed char var_16 = (signed char)2;
signed char var_17 = (signed char)-115;
int zero = 0;
long long int var_18 = -7019878933279778522LL;
unsigned short var_19 = (unsigned short)14086;
short var_20 = (short)10240;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
