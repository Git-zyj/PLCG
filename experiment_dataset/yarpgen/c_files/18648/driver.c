#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-9;
short var_3 = (short)-12106;
unsigned long long int var_4 = 2858550144794699583ULL;
unsigned short var_7 = (unsigned short)13958;
signed char var_8 = (signed char)109;
unsigned char var_9 = (unsigned char)162;
long long int var_10 = -5018011076576335867LL;
unsigned char var_14 = (unsigned char)121;
unsigned int var_16 = 204478331U;
int zero = 0;
short var_17 = (short)15645;
unsigned long long int var_18 = 13851652282644740209ULL;
long long int var_19 = -7911367991653153290LL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
