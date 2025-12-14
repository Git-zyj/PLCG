#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5837386876114314810ULL;
unsigned long long int var_1 = 5458139893757114422ULL;
unsigned int var_2 = 4175262457U;
long long int var_3 = -134200915638996519LL;
unsigned char var_4 = (unsigned char)8;
unsigned long long int var_6 = 816909003655204568ULL;
long long int var_7 = -517027424865089682LL;
long long int var_8 = 5616288025429067564LL;
unsigned char var_9 = (unsigned char)6;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_11 = -4509994713638502048LL;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 12738244318488644356ULL;
unsigned char var_14 = (unsigned char)80;
long long int var_15 = 58501881341709375LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
