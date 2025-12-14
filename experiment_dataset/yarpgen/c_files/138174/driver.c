#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1084488675164970019LL;
_Bool var_1 = (_Bool)1;
unsigned long long int var_3 = 3247796480423156860ULL;
unsigned long long int var_8 = 1911644615420375500ULL;
int var_9 = 1155058993;
long long int var_10 = -2410154358598263792LL;
int var_11 = 164257562;
signed char var_15 = (signed char)76;
int zero = 0;
int var_16 = -926650994;
unsigned short var_17 = (unsigned short)43332;
unsigned short var_18 = (unsigned short)60897;
int var_19 = 718658659;
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
