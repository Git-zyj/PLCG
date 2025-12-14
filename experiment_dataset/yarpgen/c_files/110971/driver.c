#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3005373186668131367ULL;
short var_3 = (short)26463;
unsigned long long int var_4 = 14416155036015833624ULL;
unsigned char var_6 = (unsigned char)112;
unsigned long long int var_7 = 11023980643048684033ULL;
long long int var_10 = -2627900916683158573LL;
short var_11 = (short)1178;
long long int var_12 = -269261218307737566LL;
unsigned short var_14 = (unsigned short)3056;
unsigned long long int var_15 = 11085004902679306064ULL;
short var_17 = (short)429;
int zero = 0;
int var_18 = 489297717;
unsigned long long int var_19 = 17788016604974649024ULL;
unsigned long long int var_20 = 17717355695169255989ULL;
long long int var_21 = -2285473111804782066LL;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
