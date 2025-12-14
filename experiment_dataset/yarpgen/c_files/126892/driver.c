#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-12;
_Bool var_3 = (_Bool)0;
long long int var_4 = -7533269196832885736LL;
signed char var_5 = (signed char)67;
_Bool var_6 = (_Bool)1;
int var_7 = -2044269860;
long long int var_8 = 7647126251472713091LL;
long long int var_9 = -7212351039692230246LL;
unsigned int var_12 = 742390698U;
unsigned long long int var_13 = 4964260442577692965ULL;
signed char var_15 = (signed char)60;
int zero = 0;
unsigned long long int var_17 = 4594533474094465487ULL;
long long int var_18 = 7114250987624995932LL;
unsigned long long int var_19 = 6812870941103430550ULL;
unsigned long long int var_20 = 15740359769159826724ULL;
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
