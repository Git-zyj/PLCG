#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6009438533509674062ULL;
unsigned short var_3 = (unsigned short)42549;
unsigned short var_4 = (unsigned short)8777;
unsigned int var_5 = 3818254042U;
long long int var_7 = -6396568145652576900LL;
int var_8 = 1205145874;
short var_9 = (short)-29472;
signed char var_10 = (signed char)44;
unsigned short var_11 = (unsigned short)17558;
unsigned char var_13 = (unsigned char)24;
int zero = 0;
unsigned char var_16 = (unsigned char)52;
long long int var_17 = -1947041808496610421LL;
unsigned int var_18 = 2446051840U;
int var_19 = -126706088;
unsigned char var_20 = (unsigned char)232;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
