#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1752626403;
signed char var_1 = (signed char)123;
int var_3 = -1379774071;
signed char var_5 = (signed char)-109;
int var_6 = -1805307131;
signed char var_7 = (signed char)-108;
_Bool var_8 = (_Bool)0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 7888713169353636108ULL;
int zero = 0;
signed char var_12 = (signed char)50;
unsigned char var_13 = (unsigned char)207;
unsigned long long int var_14 = 12265361840634587169ULL;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
