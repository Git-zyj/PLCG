#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-27240;
long long int var_3 = 4934442851691515219LL;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
short var_8 = (short)31973;
unsigned long long int var_9 = 13451151737608687229ULL;
int zero = 0;
unsigned long long int var_11 = 4828460432012868285ULL;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)4515;
unsigned char var_14 = (unsigned char)110;
int var_15 = 892061627;
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
