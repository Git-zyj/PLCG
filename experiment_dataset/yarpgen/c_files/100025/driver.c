#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1199558205;
_Bool var_2 = (_Bool)0;
short var_4 = (short)-7894;
signed char var_7 = (signed char)107;
long long int var_8 = 115845658804917122LL;
short var_10 = (short)9661;
signed char var_13 = (signed char)104;
long long int var_15 = 6909641229071560809LL;
int zero = 0;
unsigned long long int var_17 = 10823063328232447457ULL;
unsigned long long int var_18 = 7739802239415081742ULL;
unsigned char var_19 = (unsigned char)222;
long long int var_20 = -188615603621294928LL;
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
