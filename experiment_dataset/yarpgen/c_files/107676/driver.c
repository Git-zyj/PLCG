#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)121;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 12680200624034564478ULL;
long long int var_7 = -3995558998596561607LL;
signed char var_8 = (signed char)114;
short var_9 = (short)3073;
int var_11 = -101753934;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 909742272197830947ULL;
unsigned long long int var_14 = 11853181173770785085ULL;
int var_15 = 1779042196;
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
