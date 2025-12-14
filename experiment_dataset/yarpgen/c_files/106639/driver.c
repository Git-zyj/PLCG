#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)6;
_Bool var_3 = (_Bool)0;
long long int var_4 = -8552534451753391213LL;
unsigned char var_5 = (unsigned char)184;
unsigned short var_7 = (unsigned short)26069;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)50177;
unsigned long long int var_11 = 13559644661356123699ULL;
long long int var_12 = -6427161631857192629LL;
unsigned long long int var_13 = 8780829745385736268ULL;
unsigned short var_14 = (unsigned short)1949;
unsigned short var_15 = (unsigned short)20522;
unsigned int var_16 = 2344825318U;
unsigned long long int var_17 = 8362176277903975901ULL;
int zero = 0;
signed char var_18 = (signed char)-71;
long long int var_19 = -207836135895562338LL;
signed char var_20 = (signed char)90;
long long int var_21 = 9062167566914145657LL;
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
