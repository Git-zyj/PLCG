#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)27;
short var_1 = (short)-7461;
unsigned int var_2 = 1852060216U;
long long int var_7 = 5410248249318257695LL;
int var_9 = 559418208;
_Bool var_12 = (_Bool)0;
int var_13 = 1509882293;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)180;
int zero = 0;
unsigned long long int var_17 = 15404819095700674988ULL;
unsigned long long int var_18 = 18331478884672677298ULL;
int var_19 = -518707366;
long long int var_20 = -383821261047941850LL;
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
