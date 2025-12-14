#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10897;
unsigned char var_2 = (unsigned char)107;
unsigned short var_3 = (unsigned short)22204;
short var_4 = (short)1692;
unsigned int var_6 = 3074050840U;
unsigned short var_7 = (unsigned short)55557;
short var_9 = (short)-14914;
signed char var_10 = (signed char)-75;
_Bool var_13 = (_Bool)1;
int var_14 = -1408382568;
unsigned short var_15 = (unsigned short)5312;
int zero = 0;
int var_18 = 1854382054;
int var_19 = -549697476;
unsigned int var_20 = 730937919U;
void init() {
}

void checksum() {
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
