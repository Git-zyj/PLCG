#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4829810149396387509LL;
_Bool var_4 = (_Bool)0;
int var_5 = -1193689141;
signed char var_8 = (signed char)121;
unsigned long long int var_10 = 17457775741467494854ULL;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)93;
unsigned long long int var_17 = 7032894391807830564ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)115;
unsigned char var_19 = (unsigned char)99;
int var_20 = 668604474;
unsigned long long int var_21 = 15709437835721065554ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
